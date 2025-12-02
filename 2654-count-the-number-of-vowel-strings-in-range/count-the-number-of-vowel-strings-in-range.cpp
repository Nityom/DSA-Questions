class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        string s;
        int count = 0;
        for (int i = left; i <= right; i++) {
            s = words[i];
            if ((s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' ||
                 s[0] == 'u') &&
                (s[s.size() - 1] == 'a' || s[s.size() - 1] == 'e' ||
                 s[s.size() - 1] == 'i' || s[s.size() - 1] == 'o' ||
                 s[s.size() - 1] == 'u')) {
                count++;
            }
        }
        return count;
    }
};