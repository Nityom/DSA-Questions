class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int current_count=0;
        int max_count=0;
         
         for(int i=0;i<n;i++){
            if(nums[i]==1){
                current_count++;
                 max_count =  max(current_count,max_count);
            }
            else{
                current_count=0;
            }
     
         }
         return max_count;

    }
};