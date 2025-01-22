class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Handle cases where k is greater than the size of nums
        
        // Step 1: Reverse the entire array
        reverse(nums.begin(), nums.end());
        
        // Step 2: Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);
        
        // Step 3: Reverse the remaining n-k elements
        reverse(nums.begin() + k, nums.end());
    }
};
