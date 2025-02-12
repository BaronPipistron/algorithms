// Time: O(nlogn)
// Space: O(n)

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> mp;

        for (auto num: nums) {
            /*
            if (mp.find(num) == mp.end()) {
                mp[num] = 0;
            }
            
            не надо, так как mp[num] проверит есть ли элемент с таким ключом,
            если есть то инкрементирует значение, если нет - создаст элемент
            с таким ключом, а значение будет дефолтное для данного типа, то есть
            в нашем случае 0
            */

            ++mp[num];
        }

        std::vector<std::pair<int, int>> arr;
        for (const auto& keyValue: mp) {
            arr.push_back({keyValue.first, keyValue.second});
        }
        
        std::sort(
            arr.begin(), 
            arr.end(), 
            [](const std::pair<int, int>& p1, const std::pair<int, int>& p2) 
            {
                return p1.second > p2.second;
            });

        std::vector<int> ans;
        for (size_t i = 0; i != k; ++i) {
            ans.push_back(arr[i].first);
        }

        return ans;
    }
};