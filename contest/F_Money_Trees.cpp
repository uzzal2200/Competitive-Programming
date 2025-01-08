#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        int n;             // Number of elements in the array
        long long k;       // Maximum allowed sum
        cin >> n >> k;

        vector<long long> a(n), h(n);
        for (int i = 0; i < n; i++)
            cin >> a[i]; // Read array `a`

        for (int i = 0; i < n; i++)
            cin >> h[i]; // Read array `h`

        int l = 0, r = 0;     // Sliding window pointers
        long long sum = 0;    // Current sum of the window
        int ans = 0;          // Maximum valid subarray length

        while (r < n)
        {
            // If `h[r-1] % h[r] != 0`, reset the window
            if (r > 0 && h[r - 1] % h[r] != 0)
            {
                l = r;
                sum = 0;
            }

            sum += a[r]; // Add current element to the sum

            // Ensure the sum doesn't exceed `k`
            while (sum > k)
            {
                sum -= a[l];
                l++;
            }

            // Update the maximum valid subarray length
            ans = max(ans, r - l + 1);
            r++;
        }

        cout << ans << "\n"; // Output the result for this test case
    }

    return 0;
}
