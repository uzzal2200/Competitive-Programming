#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if((s[0] == 'y' or s[0] == 'Y') and (s[1] == 'e' or s[1] == 'E') and (s[2] == 's' or s[2] == 'S'))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
