#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x = 1;
        vector<int> v;
        int n;
        cin>>n;
       
        while(n)
        {
            x = x*10;
            int p = n%x;
            if(p) v.push_back(p);
            n = n-p;
            
        }

        cout<<v.size()<<endl;
        for(int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
