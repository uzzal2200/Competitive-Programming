#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
    cin>>n;
    int f=n;
    while(f >= 10)
    {
        f=f/10;
    }
    if(f%2 == 0)
    {
        cout<<"EVEN"<<endl;
    }
    else
    {
        cout<<"ODD"<<endl;
    }


    return 0;
}
