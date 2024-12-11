#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,p;
        cin>>n>>k>>p;
        vector<int>chairs(n);
        for(int i=0;i<n;i++)
        {
            cin>>chairs[i];
        }
        sort(chairs.begin(),chairs.end());
        int tallest = chairs.back();
        chairs.pop_back();
        int ved_h = k + tallest;
        int varun_h = p + accumulate(chairs.begin(),chairs.end(),0);
        if(ved_h > varun_h) cout<<"Ved"<<endl;
        else if (varun_h > ved_h) cout<<"Varun"<<endl;
        else cout<<"Equal"<<endl;
    
    }
    return 0;
}