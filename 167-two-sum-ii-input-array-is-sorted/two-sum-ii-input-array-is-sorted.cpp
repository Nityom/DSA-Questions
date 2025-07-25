class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int p =0;
        int q = n-1;
        
        while(p<=q){
            int current_sum = numbers[p]+numbers[q];
            if(current_sum == target){
                return {p+1,q+1};
            }
            else if(current_sum>target){
                q --;
            }
            else{
                p++;
            }
        }
        return {};
        
    }
};