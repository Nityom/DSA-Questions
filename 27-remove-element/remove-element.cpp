class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int pointer = 0;

        for(int i=0; i<nums.size();i++){
            if(nums[i]!= val){
                nums[pointer] = nums[i];
                pointer++;

            }
        }
        return pointer ;
    }
};