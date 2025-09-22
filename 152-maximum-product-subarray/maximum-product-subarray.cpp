class Solution {
    int helper(int index, int currMax, int currMin, vector<int>& nums) {
        if (index == nums.size()) return currMax; // reached end, return current max

        int num = nums[index];

        // Calculate new max and min including current number
        int tempMax = max({num, currMax * num, currMin * num});
        int tempMin = min({num, currMax * num, currMin * num});

        // Recurse for next index
        return max(tempMax, helper(index + 1, tempMax, tempMin, nums));
    }

public:
    int maxProduct(vector<int>& nums) {
        return helper(0, 1, 1, nums); // start with 1 as multiplier
    }
};
