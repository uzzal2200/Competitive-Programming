#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        // Binary search for the minimum unsavoriness
        int low = 0, high = *max_element(A.begin(), A.end()) - *min_element(A.begin(), A.end());
        int result = high;

        while (low <= high) {
            int mid = (low + high) / 2; // Current unsavoriness threshold
            int changes = 0;           // Count of temperature changes
            int minTemp = A[0], maxTemp = A[0]; // Current segment min and max

            for (int i = 1; i < N; i++) {
                minTemp = min(minTemp, A[i]);
                maxTemp = max(maxTemp, A[i]);

                // If the current segment exceeds the allowed unsavoriness
                if (maxTemp - minTemp > mid) {
                    changes++;       // Start a new segment
                    minTemp = A[i]; // Reset segment
                    maxTemp = A[i];
                }
            }

            if (changes <= K) {
                result = mid;   // Valid solution, try smaller unsavoriness
                high = mid - 1;
            } else {
                low = mid + 1;  // Too many changes, try larger unsavoriness
            }
        }

        cout << result << endl;
    }

    return 0;
}
