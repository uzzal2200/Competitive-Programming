#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(b< a && a<c) cout<<a<<endl;
        else if(b>a && c < a) cout<<a<<endl;
        else if(b<c && c<a) cout<<c<<endl;
        else if(b>c && a<c) cout<<c<<endl;
        else if(a<b && b<c) cout<<b<<endl;
        else if(a>b && c<b) cout<<b<<endl;
    }
    return 0;
}
