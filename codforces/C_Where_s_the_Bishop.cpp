#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s[9];
        for(int i=0;i<8;i++)
        {
            cin>>s[i];

        }
        int index_1, index_2;
       for(int i=1;i<7; i++)
       {
        for(int j=1;j<7;j++)
        {
            if(s[i-1][j+1] == '#' && s[i-1][j-1] == '#' && s[i+1][j+1] == '#' && s[i+1][j-1] == '#')
            {
               index_1 = i+1;
               index_2 = j+1;
            }
        }
       }
       cout<<index_1<<" "<<index_2<<endl;
    }
    return 0;
}
