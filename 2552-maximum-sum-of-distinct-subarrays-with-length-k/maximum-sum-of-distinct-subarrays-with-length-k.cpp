class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n= nums.size();
        unordered_map<int,int>freq;
        long maxSum = 0, current_Sum = 0;
        int left =0;

        for(int right =0;right<n;right++){
           freq[nums[right]]++;
            current_Sum += nums[right];


              if (right - left + 1 > k) {
                freq[nums[left]]--;
                current_Sum -= nums[left];
                if (freq[nums[left]] == 0) {
                    freq.erase(nums[left]);
                }
                left++;
            }
             if (right - left + 1 == k && freq.size() == k) {
                maxSum = max(maxSum, current_Sum);
            }

        }
        return maxSum;
    }
};