class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
  int n = nums.size();
  int small =1;
          sort(nums.begin(), nums.end());

              
              for(int i=0;i<n;i++){
                if(nums[i]==small){
                    small++;
                };
              }
              return small;
    }
};