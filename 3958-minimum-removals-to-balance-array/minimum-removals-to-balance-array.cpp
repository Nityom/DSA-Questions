class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int i = 0;
        int L = 0;

        for (int j = 0; j < n; j++) {
            while (i < j && (long long)nums[j] > (long long)k * nums[i]) {
                i++;
            }
            L = max(L, j - i + 1);
        }

        return n - L;
    }
};
