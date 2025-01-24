class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int max_ones = 0;
        int current_count = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                current_count++;
            }
            else{
                max_ones = max(max_ones , current_count);
                current_count = 0;
            }
        } 
        return max(max_ones , current_count);
        
    }
};