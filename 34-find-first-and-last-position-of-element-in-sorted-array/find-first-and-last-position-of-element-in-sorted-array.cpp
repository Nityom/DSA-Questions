class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int left= 0;
        int right=nums.size() -1;
        int first =-1;
        int last = -1;

        while(left<=right){
            if(nums[left]==target){
                first=left;
                break;
            }
            left++;
        }

        while(left<=right){
            if(nums[right]==target){
                last=right;
                break;
            }
            right--;
        }
      return{first,last};
    }  

};