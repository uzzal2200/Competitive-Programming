#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,x,y;
    cin>>a>>x>>y;
    int r = x + y;
    if(r > a) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}