class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSum = nums[0];
        int currentSum =0;

        for(int i=0;i<n;i++){
            currentSum +=nums[i];
            maxSum = max(maxSum,currentSum);
            if(currentSum<0) currentSum =0;
        }
        return maxSum;
    }
};