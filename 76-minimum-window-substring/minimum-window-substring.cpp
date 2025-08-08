class Solution {
public:
    string minWindow(string s, string t) {
        if (s.size() < t.size()) return "";

        unordered_map<char, int> tMap;
        for (char c : t) tMap[c]++;

        int required = tMap.size();  
        int formed = 0;              

        unordered_map<char, int> windowMap;
        int left = 0, right = 0;
        int minLen = INT_MAX;
        int minLeft = 0;

        while (right < s.size()) {
            char c = s[right];
            windowMap[c]++;
            
            if (tMap.count(c) && windowMap[c] == tMap[c])
                formed++;

       
            while (left <= right && formed == required) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    minLeft = left;
                }

                char leftChar = s[left];
                windowMap[leftChar]--;
                if (tMap.count(leftChar) && windowMap[leftChar] < tMap[leftChar])
                    formed--;

                left++;
            }

            right++;
        }

        return minLen == INT_MAX ? "" : s.substr(minLeft, minLen);
    }
};
