#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        int l = 0;
        int r = n - 1;
        int x;
        cin >> x;
        int res = -1;
        while (l <= r)
        {

            int mid = (l + r) / 2;
            if (a[mid] == x)
            {
                res = mid;
                break;
            }
            else if (a[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (res == -1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}