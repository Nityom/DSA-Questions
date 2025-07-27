class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low =1;
        int n = piles.size();
        int high = *max_element(piles.begin(), piles.end());

       while(low<high){
        int mid = (low+high)/2;
        int totalHours = 0;
        for (int pile : piles) {
                totalHours += (pile + mid - 1) / mid; 
            }

 if (totalHours <= h) {
                high = mid;  
            } else {
                low = mid + 1; 
            }
       }
       return high;
    }
};