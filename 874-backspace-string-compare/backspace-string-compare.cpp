class Solution {
public:
    string buildString(string s) {
        string temp = "";
        for (char c : s) {
            if (c != '#')
                temp.push_back(c);
            else if (!temp.empty())
                temp.pop_back();
        }
        return temp;
    }

    bool backspaceCompare(string s, string t) {
        return buildString(s) == buildString(t);
    }
};
