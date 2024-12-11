#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n; 
    cin >> m >> n;

  
    if (n >= (m + 1) / 2) { 
        cout << "NEWBIE" << endl;
    } else {
        cout << "PRO" << endl;
    }

    return 0;
}
