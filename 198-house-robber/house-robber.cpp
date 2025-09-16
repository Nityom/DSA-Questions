class Solution {
    int helper(int index ,vector<int>& nums,vector<int>& dp){

        if(index >= nums.size()){
            return 0;
        }

        if(dp[index]!=-1){
            return dp[index];
        }

        int take = nums[index] + helper(index + 2 , nums,dp);
        int nottake = helper(index + 1 , nums,dp);

        return dp[index] = max(take , nottake);
    }
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size() + 1 , -1);
       return helper(0 , nums,dp);
    }
};