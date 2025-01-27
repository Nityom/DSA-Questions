class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
     unordered_map<int,int> arr;
     for(int i=0;i<n;i++){
         arr[nums[i]]++;
         if(arr[nums[i]]>n/2){
            return nums[i];
         }
     }
 return -1;
    }
};