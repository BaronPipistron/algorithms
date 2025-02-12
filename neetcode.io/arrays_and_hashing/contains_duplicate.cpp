// Time: O(n)
// Space: O(n)

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.empty()) return false;

        std::unordered_map<int, int> mp;

        for (auto num: nums) {
            if (mp.find(num) != mp.end()) {
                return true;
            }

            mp[num] = 1;
        }

        return false;
    }
};