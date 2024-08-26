#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int re=x*y;
        int r= z/2;
        int result=(r/re);
        cout<<result<<endl;
    }
    return 0;
}
