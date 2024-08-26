#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
   {
    int a,b;
    cin>>a>>b;
    int sub=a-b;
    if(sub==0)
   {
    cout<<"0"<<endl;
   }
   else if(a<b)
    {
        if(sub%2==0)
   {
    cout<<"2"<<endl;
   }
   else
   {
    cout<<"1"<<endl;
   }
    }
  else
  {
    if(sub%2==0)
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<"2"<<endl;
    }
  }
   }
  
    return 0;
}
