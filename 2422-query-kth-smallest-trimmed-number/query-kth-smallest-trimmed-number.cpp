#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& numbers, vector<vector<int>>& queries) {
        int numOfNumbers = numbers.size();
        vector<pair<string, int>> trimmedNumbers(numOfNumbers);
        vector<int> answer;

        for (auto& query : queries) {
            int k = query[0];
            int trimLength = query[1];

            for (int i = 0; i < numOfNumbers; ++i) {
                trimmedNumbers[i] = {numbers[i].substr(numbers[i].size() - trimLength), i};
            }

            sort(trimmedNumbers.begin(), trimmedNumbers.end());

            answer.push_back(trimmedNumbers[k - 1].second);
        }

        return answer;
    }
};
