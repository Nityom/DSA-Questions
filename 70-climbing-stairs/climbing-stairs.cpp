class Solution {
    int helper(int index,vector<int>& dp){
        if(index == 0 || index == 1){
            return 1;
        }

        if(dp[index]!=-1){
            return dp[index];
        }

        dp[index] = helper(index - 1,dp) + helper(index - 2,dp);
        return dp[index];
    }
public:
    int climbStairs(int n) {
        vector<int> dp(n + 1 , -1);
        return helper(n,dp);
    }
};