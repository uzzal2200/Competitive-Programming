#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int lo=0;
    int up=0;
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
        {
            up++;

        }
        else
        {
            lo++;
        }
    }
    if(up>lo)
    {
        for(int i=0;i<s.size();i++)
        {
            s[i]=toupper(s[i]);
        }
        cout<<s<<endl;
    }
    if(lo > up)
    {
        for(int i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
    }
     if(lo == up)
    {
        for(int i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
    }
    return 0;
}
