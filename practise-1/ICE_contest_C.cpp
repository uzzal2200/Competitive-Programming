#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
{
    int n,k,s;
    cin>>n>>k>>s;
    int odd=n*n;
    int array=s-odd;
    int element=array/(k-1);
    cout<<element<<endl;
}
    return 0;
}

