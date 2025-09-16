class Solution {

    int helper(int index, int target, vector<int>& nums, vector<vector<int>>& dp){   
      
     if(target == 0) return true;

     if(index>=nums.size() || target < 0) return false;

     if(dp[index][target] != -1){
        return dp[index][target];
     }

    bool  take = helper(index+1,  target- nums[index],nums,dp);
    bool nottake = helper(index+1, target,nums,dp);

    return dp[index][target] = take || nottake;

    }
public:
    bool canPartition(vector<int>& nums) {
     
        int n = nums.size();
        int sum =0;

        for(int i =0;i<n;i++){
            sum += nums[i];
        }

       int mid = sum/2;

       if(sum%2!=0){
  return false;
       }
      int target = sum/2;
     vector<vector<int>> dp(n, vector<int>(target+1,-1));
      
      return helper(0,target,nums,dp);

    }
};