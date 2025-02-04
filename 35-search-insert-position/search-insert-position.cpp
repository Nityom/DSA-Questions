class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int right = nums.size()-1;
        int left =0;

        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                left=mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return left;
    }
};