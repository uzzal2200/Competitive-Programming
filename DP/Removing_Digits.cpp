#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
vector<int> dp(N,INT_MAX);
int solve(int n)
{
    if(n==0) return 0;
    if(dp[n] != INT_MAX) return dp[n];
    vector<int>digit;
    for(auto c: to_string(n))
    {
        digit.push_back(c-'0');
    }
    for(int val: digit )
    {
        int option=solve(n-val)+1;
        dp[n]=min(dp[n],option);
    }
    return dp[n];
}
int main()
{
    int n;
    cin>>n;
    cout<<solve(n)<<endl;
    return 0;
}
