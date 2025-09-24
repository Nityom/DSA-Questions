class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
          int i = 0, j = 0;
          int n = nums1.size();
          int m = nums2.size();
          while( i< n && j<m){
            if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
          }
            while(i < n) ans.push_back(nums1[i++]);
        while(j < m) ans.push_back(nums2[j++]);
        int k = ans.size();






           if(k % 2 == 1) {
            return ans[k/2];
        } else {
            return (ans[k/2-1]+ans[k/2])/2.0;
        }

    }
};