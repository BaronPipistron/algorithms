// Time: O(n)
// Space: O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        size_t l = 0;
        size_t r = numbers.size() - 1;

        int sum = 0;

        while (l < r) {
            sum = numbers[l] + numbers[r];

            if (sum == target) {
                return {++l , ++r}; // 1-indexed
            } else if (sum < target) {
                ++l;
            } else {
                --r;
            }
        }

        return {-1, -1};
    }
};