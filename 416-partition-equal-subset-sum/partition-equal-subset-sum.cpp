class Solution {
    bool helper(int index, int target, vector<int>& nums, vector<vector<int>>& dp) {
        if (target == 0) return true;           // found a subset
        if (index >= nums.size() || target < 0) return false;

        if(dp[index][target] != -1){
            return dp[index][target];
        }

        // include or exclude current element
        bool take = helper(index + 1, target - nums[index], nums,dp);
        bool notTake = helper(index + 1, target, nums,dp);

        return dp[index][target] = take || notTake;
    }

public:
    bool canPartition(vector<int>& nums) {
         
        int sum = 0;
        for (int num : nums) sum += num;

        if (sum % 2 != 0) return false;  // odd sum can't be split equally
        int target = sum / 2;

        vector<vector<int>>dp(nums.size()+1,vector<int>(target+1,-1));

        return helper(0, target, nums,dp);
    }
};
