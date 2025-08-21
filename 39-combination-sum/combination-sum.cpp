class Solution {
public:
      vector<vector<int>>res;
      void backtrack(vector<int>& candidates, int target, int start, vector<int>& path){
        if(target == 0){
            res.push_back(path);
            return;
        }
        for(int i= start; i<candidates.size();i++){
            if(candidates[i]>target) continue;
            path.push_back(candidates[i]);
            backtrack(candidates,target-candidates[i],i,path);
            path.pop_back();

        }
      }

 
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> path;
        backtrack(candidates,target,0,path);
        return res;
    }
};