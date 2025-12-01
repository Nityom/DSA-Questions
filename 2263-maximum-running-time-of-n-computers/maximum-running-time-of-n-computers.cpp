class Solution {
public:

    bool possible(vector<int>& batteries, long long mid, int n) {
        long long target = n * mid;
        long long sum = 0;

        for (long long b : batteries) {
            sum += min(b, mid);
            if (sum >= target) return true;
        }
        return false;
    }

    long long maxRunTime(int n, vector<int>& batteries) {

        long long sum_total = 0;
        for (int b : batteries) sum_total += b;

        long long l = 0;
        long long r = sum_total / n;
        long long ans = 0;

        while (l <= r) {
            long long mid = l + (r - l) / 2;

            if (possible(batteries, mid, n)) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        return ans;
    }
};
