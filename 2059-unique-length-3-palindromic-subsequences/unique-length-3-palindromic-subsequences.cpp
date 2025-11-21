class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<string> res;   
        unordered_set<char> left;      
        
        unordered_map<char, int> right;
        for (char c : s) right[c]++;

        // iterate middle char m
        for (char m : s) {
            right[m]--;  

            for (char c : left) {
                if (right[c] > 0) {
         
                    string pal = "";
                    pal += c;
                    pal += m;
                    pal += c;
                    res.insert(pal);
                }
            }

            left.insert(m);  
        }

        return res.size();
    }
};