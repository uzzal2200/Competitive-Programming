#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,z;
    cin>>x>>y>>z;
    int result = x+y;
    if( result > z)
    {
        int r = 2*z + y;
        cout<<r<<endl;
    }
    else
    {
        int r1 = 2*x + y*3;
        cout<<r1<<endl;
    }
    return 0;
}