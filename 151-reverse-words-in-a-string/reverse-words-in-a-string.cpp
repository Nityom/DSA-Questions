class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);  
        string word;
        vector<string> words;


        while (ss >> word) {
            words.push_back(word);
        }

      
        reverse(words.begin(), words.end());

        string result;
        for (int i = 0; i < words.size(); i++) {
            if (i > 0) result += " ";  
            result += words[i];
        }

        return result;  
    }

};