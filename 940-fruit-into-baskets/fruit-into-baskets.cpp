class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int left =0;
        int right = 0;
        unordered_map<int,int>m;
        int maxFruits=0;

        while(right<n){
      m[fruits[right]]++;
      right++;

      while(m.size()>2){
        m[fruits[left]]--;
        if(m[fruits[left]]==0){
            m.erase(fruits[left]);
        }
        left++;
      }
      maxFruits = max(maxFruits,right-left);

  

        }

        return maxFruits;
    }
};