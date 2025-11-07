class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        // Step 1: Sort by units per box (descending order)
        sort(boxTypes.begin(), boxTypes.end(), [](vector<int>& a, vector<int>& b) {
            return a[1] > b[1];
        });

        int totalUnits = 0;

   
        for (auto& box : boxTypes) {
            int numBoxes = box[0];
            int unitsPerBox = box[1];

            if (truckSize >= numBoxes) {
                totalUnits += numBoxes * unitsPerBox;
                truckSize -= numBoxes;
            } 
        
            else {
                totalUnits += truckSize * unitsPerBox;
                break;
            }
        }

        return totalUnits;
    }
};
