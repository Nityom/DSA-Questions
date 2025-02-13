class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanValues = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        
        int total = 0;
        int prevValue = 0;
        
        for (int i = s.length() - 1; i >= 0; i--) {
            int currValue = romanValues[s[i]];
            
            if (currValue < prevValue) {
                total -= currValue;
            } else {
                total += currValue;
            }
            
            prevValue = currValue;
        }
        
        return total;
    }
};
