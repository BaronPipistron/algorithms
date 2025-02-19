// Time: O(n)
// Space: O(1)

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_s = 0;

        int l = 0;
        int r = heights.size() - 1;

        while (l < r) {
            int current_s = std::min(heights[l], heights[r]) * (r - l);
            max_s = (max_s > current_s) ? max_s : current_s;

            if (heights[l + 1] > heights[l] || heights[l] < heights[r]) {
                ++l;
            } else {
                --r;
            }
        }

        return max_s;
    }
};
