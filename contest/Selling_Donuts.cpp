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
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int b[m];
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        int cnt = 0;
        for(int i=0;i<m;i++)
        {
            int type = b[i];
            if(a[type] > 0 )
            {
                a[type]--;
            }
            else
            {
                cnt++;
            }
       }
       cout<<cnt<<endl;
    }
    return 0;
}