#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    if(max(l1,l2) <= min(r1,r2))
    {
        cout<<max(l1,l2)<<" "<<min(r1,r2);
    }
    else
    {
        cout<<"-1"<<endl;
    }
    return 0;
}
