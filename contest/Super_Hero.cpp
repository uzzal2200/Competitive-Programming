#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int h, k;
        cin >> h >> k;
        int maxBattle = 0;
        for (int m = 1; m <= k; ++m)
        {
            int p = h * m;
            int battleCount = 0;
            while (p > 1)
            {
                int divisor = 1;
                for (int i = p / 2; i >= 1; --i)
                {
                    if (p % i == 0)
                    {
                        divisor = i;
                        break;
                    }
                }
                p = divisor;
                battleCount++;
            }
            maxBattle = max(maxBattle, battleCount);
        }
        cout << maxBattle << endl;
    }
    return 0;
}