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
        for(int i = 0; i < n; i++)
        {
             cin>>a[i];
        }

        bool no = false;
    
        for(int i = 0; i < n-2; i++)
        {
            if(a[i] % 2 != a[i+2] % 2)
            {
                no = true;
                break;
            }
        }
        if(no) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
