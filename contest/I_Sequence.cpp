#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    int moves = 0;
    for (int i = 1; i < n; ++i) {
        if (b[i] <= b[i - 1]) {
            int diff = b[i - 1] - b[i];
            moves += (diff / d) + 1;
            b[i] += ((diff / d) + 1) * d;
        }
    }

    cout << moves << endl;

    return 0;
}
