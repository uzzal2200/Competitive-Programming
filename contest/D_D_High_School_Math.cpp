#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int coutn=0;
    for(int i=0;i<n;i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
       
        int min_val= min(a,c);
        int max_val=max(b,d);
         count = max_val - min_val + 1;
        
        cout<<count<<endl;
    }
    return 0;
}
