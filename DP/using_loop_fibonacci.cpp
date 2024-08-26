// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//      a[0]=1;
//      a[1]=1;
//      for(int i=2;i<=n;i++)
//      {
//         a[i]=a[i-1] + a[i-2];
//      }
//      cout<<a[n]<<endl;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int dp[1000];
int fibonacci(int n)
{
    if( n==0 || n==1) return 1;
    if(dp[n] != -1) return dp[n];
    int chose1=fibonacci(n-1);
    int chose2=fibonacci(n-2);
    return dp[n]=chose1+chose2;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        dp[i]=-1;
    }
    cout<<fibonacci(n)<<endl;
    return 0;
}
