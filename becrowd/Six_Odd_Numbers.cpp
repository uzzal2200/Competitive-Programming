#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0) n++;
    for(int i=0;i<6;i++)
    {
    cout<<n<<endl;
    n=n+2;
    }

    return 0;
}
