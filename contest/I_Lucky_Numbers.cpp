#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int d1=n/10;
    int d2=n%10;
    if(d2%d1==0 || d1%d2==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
