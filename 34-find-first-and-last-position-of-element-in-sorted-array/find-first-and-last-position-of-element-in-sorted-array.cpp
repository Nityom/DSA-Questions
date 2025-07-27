class Solution {
public:

  vector<int> searchRange(vector<int>& nums, int target) {
    int n = nums.size();
    int low = 0, high = n - 1;
    int found = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            found = mid;
            break;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found == -1) return {-1, -1};

    int left = found, right = found;

    while (left > 0 && nums[left - 1] == target) left--;
    while (right < n - 1 && nums[right + 1] == target) right++;

    return {left, right};
}

};
