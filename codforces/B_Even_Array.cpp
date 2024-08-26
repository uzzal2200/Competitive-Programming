#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        int even=0,odd=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i % 2==0 and a[i]%2 !=0)
            {
                even++;
            }
            else if(i%2==1 and a[i] %2==0)
            {
                odd++;
            }
        }
        if(even != odd) 
        {
            cout<<"-1"<<endl;

        }
        else cout<<even<<endl;
    }
    return 0;
}
