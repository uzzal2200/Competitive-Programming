#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        long long L, R;
        cin >> N >> L >> R;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        long long product = 1;
        bool outOfRange = false;

        for (int i = 0; i < N && !outOfRange; ++i) {
            for (int j = i + 1; j < N; ++j) {
                product *= (A[i] ^ A[j]);
                if (product >= R) { 
                    outOfRange = true;
                    break;
                }
            }
        }

        if (!outOfRange && product >= L && product < R) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
