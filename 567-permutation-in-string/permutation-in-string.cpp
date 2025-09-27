class Solution {
    bool checkEqual(int a[26], int b[26]) {
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i]) return false;
        }
        return true;
    }

public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();

        if (n > m) return false;

        int count1[26] = {0};
        int count2[26] = {0};

        // count freq of s1
        for (int i = 0; i < n; i++) {
            count1[s1[i] - 'a']++;
            count2[s2[i] - 'a']++;
        }

        // check first window
        if (checkEqual(count1, count2)) return true;

        // sliding window
        for (int i = n; i < m; i++) {
            // add new char
            count2[s2[i] - 'a']++;

            // remove old char
            count2[s2[i - n] - 'a']--;

            // check
            if (checkEqual(count1, count2)) return true;
        }

        return false;
    }
};
