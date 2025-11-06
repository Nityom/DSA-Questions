class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        if (k > n) return -1;

        unordered_map<int, vector<int>> positions;

        // Store all positions (indices) for each number
        for (int i = 0; i < n; ++i)
            positions[nums[i]].push_back(i);

        int maxStart = n - k;
        int ans = -1;

        for (auto &p : positions) {
            int val = p.first;
            vector<int> &idxs = p.second;

            vector<pair<int, int>> intervals;
            for (int i : idxs) {
                int L = max(0, i - k + 1);
                int R = min(i, maxStart);
                if (L <= R) intervals.push_back({L, R});
            }

            if (intervals.empty()) continue;

            // Sort and merge intervals
            sort(intervals.begin(), intervals.end());
            int L = intervals[0].first, R = intervals[0].second;
            int total = 0;

            for (int j = 1; j < intervals.size(); ++j) {
                int l2 = intervals[j].first, r2 = intervals[j].second;
                if (l2 > R + 1) {
                    total += (R - L + 1);
                    L = l2; R = r2;
                } else {
                    R = max(R, r2);
                }
            }
            total += (R - L + 1);

            // If number appears in exactly 1 window of length k
            if (total == 1)
                ans = max(ans, val);
        }

        return ans;
    }
};
