class Solution {
    int helper(int index, vector<int>& dp){
        if(index ==1) return 1;
        if(index ==0) return 0;

        if(dp[index]!=-1){
            return dp[index];
        }

        return dp[index] = helper(index-1,dp) + helper(index-2,dp);
    }
public:
    int fib(int n) {
        vector<int> dp(n+1,-1);
    return  helper(n,dp);
    }
};