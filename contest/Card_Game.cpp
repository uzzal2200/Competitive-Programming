#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int even = n/2;
        int odd = n - even;
        int sum = 0;
        if(x%2 == 0)
        {
            sum = even - 1;
        }
        else
        {
           sum = odd - 1;
        }
        cout<<sum<<endl;
    }
    return 0;
}