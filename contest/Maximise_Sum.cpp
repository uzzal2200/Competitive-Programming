#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        vector<int>v;
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
      for(int i = 0; i<n;i++)
      {
        if(a[i]< 0)
            {
                a[i]=a[i]*-1;

            }
            sum = sum + a[i];
      }
      cout<<sum<<endl;
        
    }
    return 0;
}
