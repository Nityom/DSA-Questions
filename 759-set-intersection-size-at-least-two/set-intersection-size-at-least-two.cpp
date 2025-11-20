class Solution {
public:
    // Sort by end ascending; if tie, start descending
    static bool comp(vector<int> &a, vector<int> &b)
    {
        if (a[1] != b[1]) return a[1] < b[1];
        return a[0] > b[0];
    }

    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        
        // Sort intervals using greedy order
        sort(intervals.begin(), intervals.end(), comp);

        // s1 = second largest picked number
        // s2 = largest picked number
        int s1 = -1, s2 = -1;
        int ans = 0;

        // Process each interval
        for (auto &v : intervals)
        {
            int l = v[0];
            int r = v[1];

            // Case 1: interval already contains both points
            if (l <= s1 && s2 <= r)
                continue;

            // Case 2: contains only s2 → need 1 more point
            if (l <= s2) 
            {
                ans += 1;
                s1 = s2;   // shift largest to second largest
                s2 = r;    // add new point at r
            } 

            // Case 3: contains none → need 2 points
            else 
            {
                ans += 2;
                s1 = r - 1; // pick (r-1)
                s2 = r;     // pick r
            }
        }

        return ans;
    }
};
