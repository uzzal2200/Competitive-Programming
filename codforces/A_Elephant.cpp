#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s=n/5;
    if(n%5==0)
    {
        cout<<s;
    }
    else
    {
     cout<<s+1;
    }
    return 0;
}
