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
        int result;
        result=n*n;
        if(result >= 10)
        {
            int r=result % 10;
            cout<<r<<endl;
        }
        else
        {
            cout<<result<<endl;
        }
        
    }
    return 0;
}
