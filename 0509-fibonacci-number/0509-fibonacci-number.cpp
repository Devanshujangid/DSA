class Solution {
public:
    int fib(int n) {
        // using DP

        // initializing a dp array
        vector<int>dp(n+1,-1); // size=n+1 & all elements initilized with -1
        return helper(n,dp);
    }
    int helper(int n,vector<int> &dp){
        if ( n<=1 ) return n;
        if ( dp[n] != -1 ) return dp[n];
        return dp[n]=helper(n-1,dp)+helper(n-2,dp);
    }
};