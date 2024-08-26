#include<bits/stdc++.h>
using namespace std;
int dp[1000];
int fibonacci(int n)
{
    if(n == 0 || n==1) return 1;
    if(dp[n] != -1) return dp[n];
    int op1=fibonacci(n-1);
    int op2=fibonacci(n-2);
    return dp[n]=op1+op2;

}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        dp[i] = -1;
    }
    cout<<fibonacci(n)<<endl;
    return 0;
}
