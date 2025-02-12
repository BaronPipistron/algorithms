// Time: O(n^2)
// Space: O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (size_t i = 0; i != nums.size() - 1; ++i) {
            for (size_t j = i + 1; j != nums.size(); ++j) {
                if (nums[i] + nums[j] == target) return {i, j};
            }
        }

        return {-1, -1};
    }
};

// Time: O(n)
// Space: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, size_t> mp;

        for (size_t i = 0; i != nums.size(); ++i) {
            if (mp.find(target - nums[i]) != mp.end()) {
                return {mp[target - nums[i]], i};
            }

            mp[nums[i]] = i;
        }

        return {-1, -1};
    }
};