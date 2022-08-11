class Solution {
public:
    int dphelper(int n, vector<int> &dp)
    {
       if(n==0)
            return 1;
        if(n==1)
            return 1;
        if(dp[n]!=-1)
            return dp[n];
        
        dp[n-1]=climbStairs(n-1);
        dp[n-2]=climbStairs(n-2);
        
        return dp[n-1]+dp[n-2]; 
    }
    int climbStairs(int n) {
        
        vector<int> dp(n+1,-1);
        return dphelper(n,dp);        
    }
};