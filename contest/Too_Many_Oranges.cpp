// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,k;
//         cin>>n>>k;
//         int r = k/n;
//         if( r == 10) cout<<"YES"<<endl;
//         else if (r == 11) cout<<"YES"<<endl;
//         else if(r == 12) cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int min_slices = 10 * n;
        int max_slices = 12 * n;

        if (k >= min_slices && k <= max_slices) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
