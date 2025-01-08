#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> v(n), b(n);
    long long x = 0, y = 0;

    // Reading the array v and computing XOR for x
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        x ^= v[i];
    }

    // Computing b array and XOR for y
    for (int i = 0; i < n; i++)
    {
        b[i] = v[i] ^ x;
    }

    // Compute XOR of b array and check if it's 0
    for (int i = 0; i < n; i++)
    {
        y ^= b[i];
    }

    if (y == 0)
    {
        cout << x << endl;
    }
    else
    {
        cout << "-1\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  // Number of test cases
    while (t--)
    {
        solve();
    }
    return 0;
}
