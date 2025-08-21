class Solution {
public:
  vector<vector<int>>res;

   void backtrack(int k, int n, int start, vector<int>path){
       if(n==0 && path.size() == k){
        res.push_back(path);
        return;
       }
           if (n < 0 || path.size() > k) return; 
       for(int i=start;i<=9;i++){
        path.push_back(i);
        backtrack(k,n-i,i+1,path);
        path.pop_back();
       }
   }


    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> path;
        backtrack(k, n, 1, path);
        return res;
    }
};