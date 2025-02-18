// Time: O(log(n * m))
// Space: O(1)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty()) return false;

        int possible_row = -1;

        size_t n = matrix.size(); // rows
        size_t m = matrix[0].size(); // columns

        int left = 0;
        int right = n - 1;
        int mid = (left + right) / 2;

        while (left <= right) {
            if (matrix[mid][m - 1] < target) {
                left = mid + 1;
            } else if (matrix[mid][0] > target) {
                right = mid - 1;
            } else {
                possible_row = mid;
                break;
            }

            mid = (left + right) / 2;
        }

        if (possible_row == -1) return false;

        left = 0;
        right = m - 1;
        mid = (left + right) / 2;

        while (left <= right) {
            if (matrix[possible_row][mid] < target) {
                left = mid + 1;
            } else if (matrix[possible_row][mid] > target) {
                right = mid - 1;
            } else {
                return true;
            }

            mid = (left + right) / 2;
        }

        return false;
    }
};