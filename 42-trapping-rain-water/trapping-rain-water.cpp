class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l =0;
        int ans=0;
        int r= n-1;
        int lmax = INT_MIN;
        int rmax = INT_MIN;

        while(l<r){
            lmax = max(lmax,height[l]);
            rmax = max(rmax,height[r]);
            ans += (lmax<rmax) ? lmax-height[l++]:rmax-height[r--];
        }
return ans;
    }
};