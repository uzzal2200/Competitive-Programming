#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string p = "Timur";
        sort(p.begin(), p.end());
        sort(s.begin(), s.end());
        if ( p == s ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}
