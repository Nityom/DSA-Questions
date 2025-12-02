class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        unordered_map<int, int> mp;
        int M = 1e9 + 7;
        for (auto& point : points) {
            int y = point[1];
            mp[y]++;
        }
     
        int sum = 0;

        long long result = 0;
        long long prevHorizontalLines = 0;

        for (auto& it : mp) {
             long long count = it.second;
            long long horizontalLines = count * (count - 1) / 2;
            result += horizontalLines * prevHorizontalLines;
            prevHorizontalLines += horizontalLines;
        }
        return result % M;
    }
};