#include <vector>
#include <algorithm>

class Solution {
public:
    int countPairs(std::vector<int>& nums, int target) {
        int count = 0;
        int n = nums.size();

 
        std::sort(nums.begin(), nums.end());


        int left = 0;
        int right = n - 1;

    
        while (left < right) {
            if (nums[left] + nums[right] < target) {

                count += (right - left);
        
                ++left;
            } else {
          
                --right;
            }
        }

        return count;
    }
};
