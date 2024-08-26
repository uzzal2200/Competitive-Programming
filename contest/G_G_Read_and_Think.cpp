#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
     int x,y;
     cin>>x>>y;
    //   int r=x/100;
    //  int result=(r*100)*(10/100);
    int result= x*0.1;
     int ans=result+y;
     cout<<ans<<endl;
    }
  

    return 0;
}
