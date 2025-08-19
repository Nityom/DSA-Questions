class Solution {
    int helper(vector<int>& nums , int index , int prevIndex , vector<vector<int>>& dp){
        if(index == nums.size()){
            return 0;
        }

        if(dp[index][prevIndex + 1] != -1){
            return dp[index][prevIndex + 1];
        }

        int nottake = helper(nums , index + 1 , prevIndex , dp);

        int take = 0;
        if(prevIndex == -1 || nums[index]>nums[prevIndex]){
            take = 1 + helper(nums , index + 1 , index , dp);
        }

        return dp[index][prevIndex+1] = max(take , nottake);
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        int size = nums.size();
        vector<vector<int>> dp(size , vector<int>(size + 1 , -1));
         return helper(nums , 0 , -1 , dp);
    }
};