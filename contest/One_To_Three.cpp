#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int low = 0, high = *max_element(A.begin(), A.end()) - *min_element(A.begin(), A.end());
        int result = high;

        while (low <= high) {
            int mid = (low + high) / 2;

            int changes = 0, segmentStart = A[0], segmentEnd = A[0];
            for (int i = 1; i < N; i++) {
                segmentStart = min(segmentStart, A[i]);
                segmentEnd = max(segmentEnd, A[i]);

                // If current segment exceeds the allowed unsavoriness
                if (segmentEnd - segmentStart > mid) {
                    changes++;
                    segmentStart = A[i];
                    segmentEnd = A[i];
                }
            }

            if (changes <= K) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        cout << result << endl;
    }

    return 0;
}
