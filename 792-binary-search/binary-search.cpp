class Solution {
    int helper(vector<int>&nums,int left,int right,int target){
        if(left>right) return -1;
        int mid = (left+right)/2;
        if(nums[mid] == target) return mid;
        else if(nums[mid]>target){
              return helper(nums,left,mid-1,target);
        }
        else{
             return  helper(nums,mid+1,right,target);
        }

    }
public:
    int search(vector<int>& nums, int target) {
    int left =0;
    int right = nums.size()-1;
    return helper(nums,0,nums.size()-1,target);
    }
};