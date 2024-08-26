#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
     int a,b,c;
    cin>>a>>b>>c;
    int r1=a+b;
    int r2=a+c;
    int r3=b+c;
    if(r1 >= 10 || r2 >= 10 || r3>=10)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
   }
    
    return 0;
}
