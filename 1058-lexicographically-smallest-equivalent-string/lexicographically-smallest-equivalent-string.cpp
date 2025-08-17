class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        vector<char> v(26);
        for (int i = 0; i < 26; i++) {
            v[i] = i + 'a'; 
        }

        int n = s1.size();
        for (int i = 0; i < n; i++) {
            char a = s1[i];
            char b = s2[i];

            char minChar = min(v[a - 'a'], v[b - 'a']);
            char maxChar = max(v[a - 'a'], v[b - 'a']);

            for (int j = 0; j < 26; j++) {
                if (v[j] == maxChar) v[j] = minChar;
            }
            v[a - 'a'] = minChar;
            v[b - 'a'] = minChar;
        }

        string ans = "";
        for (char c : baseStr) {
            ans.push_back(v[c - 'a']);
        }

        return ans;
    }
};
