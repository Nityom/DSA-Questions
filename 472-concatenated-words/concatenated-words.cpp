class Solution {
public:
    bool isConcatenated(string word, unordered_set<string>& st, unordered_map<string, bool>& memo) {
        if (memo.find(word) != memo.end()) return memo[word];
        
        int l = word.size();
        for (int i = 1; i < l; i++) {  
            string prefix = word.substr(0, i);
            string suffix = word.substr(i);

            if (st.find(prefix) != st.end()) {
                if (st.find(suffix) != st.end() || isConcatenated(suffix, st, memo)) {
                    return memo[word] = true;
                }
            }
        }
        return memo[word] = false;
    }

    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        unordered_set<string> st(words.begin(), words.end());
        vector<string> result;
        unordered_map<string, bool> memo;

        for (auto& word : words) {
            if (isConcatenated(word, st, memo)) {
                result.push_back(word);
            }
        }
        return result;
    }
};
