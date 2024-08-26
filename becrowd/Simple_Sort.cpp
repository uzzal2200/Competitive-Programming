#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v,cp;
    for(int i=0;i<3;i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }
    cp=v;
    sort(v.begin(),v.end());
    for(int i=0;i<3;i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<cp[i]<<endl;
    }
    return 0;
}
