#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bool asending=true;
      for(int i=1;i<n;i++)
        {
            if(a[i] < a[i-1])
            {
                
               asending= false;
               break;
            }
        }
        if(asending == true)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    return 0;
}

