class Solution {
public:
 int dp[50];
   int solve(int n)
   {
    if(n==1 || n==2) return n;
    if(dp[n] != -1) return dp[n];
    int op1=solve(n-1);
    int op2=solve(n-2);
    return dp[n]=op1+op2;
   }
    int climbStairs(int n) {
        for(int i=1;i<=n;i++)
        {
            dp[i]=-1;
        }
        return solve(n);

        
    }
};