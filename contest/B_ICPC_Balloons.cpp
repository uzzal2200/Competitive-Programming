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
        set<int> v;
        for(int i=0;i<n;i++)
        {
            v.insert(s[i]);
        }
        int set_size = v.size();
        int string_size = s.size();
        int result = (set_size*2) + (string_size - set_size);
        cout<<result<<endl;
    }
    return 0;
}
