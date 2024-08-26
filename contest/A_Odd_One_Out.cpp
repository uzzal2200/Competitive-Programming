#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(b==c)
        {
            cout<<a<<endl;
        }
        else if(a==c)
        {
            cout<<b<<endl;
        }
        else if(a==b)
        {
            cout<<c<<endl;
        }
    }
    return 0;
}
