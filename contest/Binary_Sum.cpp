#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      int T;
    cin >> T;  // Number of test cases

    while (T--) {
        int N, K;
        cin >> N >> K;

        // Maximum possible 1's in alternating pattern
        int maxOnes = (N + 1) / 2;
        int minOnes = N / 2;

        // Check if K falls within the valid range
        if (K >= minOnes && K <= maxOnes) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}