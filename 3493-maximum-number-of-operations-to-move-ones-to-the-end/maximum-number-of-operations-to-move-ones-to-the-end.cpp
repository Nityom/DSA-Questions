class Solution {
public:
    int maxOperations(string s) {
        int ones = 0, count = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '1')
                ones++;
            else if ((i > 0) && s[i - 1] == '1')
                count += ones;
        }

        return count;
    }
};