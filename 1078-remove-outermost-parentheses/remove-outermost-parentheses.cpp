class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int count = 0; 
        
    for (int i = 0; i < s.length(); i++) {
         char c = s[i];
            if (c == '(') {
                if (count > 0) result += c; 
                count++; 
            } else {
                count--; 
                if (count > 0) result += c; 
            }
        }
        
        return result;
    }
};
