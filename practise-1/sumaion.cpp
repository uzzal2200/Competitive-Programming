#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
     if(sum < 0)
     {
        int r = sum*(-1);
        cout<<r<<endl;
        
     }
     else
     {
        cout<<sum<<endl;
     }
    return 0;
}
