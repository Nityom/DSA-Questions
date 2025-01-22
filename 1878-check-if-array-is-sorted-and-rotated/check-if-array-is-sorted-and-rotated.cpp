class Solution {
public:
    bool check(vector<int>& nums) {
     int rotation =0;
     int n = nums.size();
     for(int i=0;i<n;i++){

        if(nums[i]>nums[(i+1) % n]){
            rotation++;
    
        }
        if( rotation >1){
              return false;
        }
  
     }
      return true;
    }
};