#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;
    vector<long long> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    long long l = 0, r = 0, ans = 0;
    multiset<long long> window; // Multiset to maintain the current window's elements

    while (r < n)
    {
        window.insert(v[r]);

        // Maintain the condition that the difference between max and min in the window is <= k
        while (*window.rbegin() - *window.begin() > k)
        {
            window.erase(window.find(v[l]));
            l++;
        }

        // Add the number of valid subarrays ending at `r`
        ans += (r - l + 1);
        r++;
    }

    cout << ans << "\n";

    return 0;
}
