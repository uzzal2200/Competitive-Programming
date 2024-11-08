#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        int evenCount = 0, oddCount = 0;

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {  // Check if i is a divisor of N
                if (i % 2 == 0) 
                    evenCount++;
                else 
                    oddCount++;
            }
        }

        // Output result based on comparison of evenCount and oddCount
        if (evenCount > oddCount)
            cout << 1 << endl;
        else if (evenCount == oddCount)
            cout << 0 << endl;
        else
            cout << -1 << endl;
    }
    
    return 0;
}

