class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        int n = s.size();
        int mid = n / 2;

        int countL = 0, countR = 0;

        for (int i = 0; i < mid; i++) {
            if (vowels.count(s[i])) countL++;
        }
        for (int i = mid; i < n; i++) {
            if (vowels.count(s[i])) countR++;
        }

        return countL == countR;
    }
};
