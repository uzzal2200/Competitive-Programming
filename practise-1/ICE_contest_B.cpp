#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x,y;
        cin>>x>>y;
        int z=(x+y)/2;
        int d1=(x-z);
        int d2=(y-z);
        cout<<min(d1,d2)<<endl;

    }
    return 0;
}
