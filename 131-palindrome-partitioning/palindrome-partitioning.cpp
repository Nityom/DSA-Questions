class Solution {

public:
   vector<vector<string>>res;

   bool isPalindrome(string &s,int l,int r){
    while(l<r){
        if(s[l]!=s[r]) return false;
        l++;
        r--;

    }
    return true;
   }

    void backtrack(string& s, int start ,vector<string>path ){
      if(start==s.length()){
           res.push_back(path);
           return;
      }

      for(int i=start; i <s.length();i++){
        if(isPalindrome(s,start,i)){
               path.push_back(s.substr(start,i-start+1));
         backtrack(s, i + 1, path);
         path.pop_back();
        }
     
      }
    }


    vector<vector<string>> partition(string s) {
        vector<string>path;
        backtrack(s,0,path);
        return res;
    }

};