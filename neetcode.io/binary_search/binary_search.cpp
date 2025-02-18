// Time: O(logn)
// Space: O(1)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.empty()) return -1;

        int left = 0;
        int right = nums.size() - 1;
        int mid = (left + right) / 2;

        while (left <= right) {
            if (nums[mid] < target) {
                left = mid + 1;
            } else if (nums[mid] > target) {
                right = mid - 1;
            } else {
                return mid;
            }

            mid = (left + right) / 2;
        }

        return -1;
    }
};