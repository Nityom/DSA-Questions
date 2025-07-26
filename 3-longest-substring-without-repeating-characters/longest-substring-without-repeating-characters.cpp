class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_set<char>m;
        int maxLen = 0;
        int left =0;
   

        for(int right =0;right<n;right++){
            while(m.count(s[right])){
                m.erase(s[left]);
                left++;
            }

           m.insert(s[right]);
           maxLen = max(maxLen,right - left+1);


        }
        return maxLen; 
    }
};