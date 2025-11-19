class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n = nums.size();
        unordered_set<int>s(nums.begin(),nums.end());

     while(s.count(original)){
        original = original * 2;
     }
        return original;
    }
};