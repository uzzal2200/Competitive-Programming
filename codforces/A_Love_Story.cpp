#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        string c="codeforces";
        int cnt=0;
        for(int j=0;j<10;j++)
        {
          if(s[j]!=c[j])
        {
         cnt++;
        }

        }
        cout<<cnt<<endl;
        
    }
    return 0;
}
