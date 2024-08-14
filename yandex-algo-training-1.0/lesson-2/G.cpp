#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

int main() {
    std::vector<int64_t> nums;

    for (int64_t num; std::cin >> num;) {
        nums.push_back(num);
    }

    int64_t first_max = std::max(nums[0], nums[1]);
    int64_t second_max = std::min(nums[0], nums[1]);

    int64_t first_min = second_max;
    int64_t second_min = first_max;

    for (size_t i = 2; i != nums.size(); ++i) {
        if (nums[i] > first_max) {
            int64_t tmp = first_max;
            first_max = nums[i];
            second_max = tmp;
        } else if (nums[i] > second_max && nums[i] <= first_max) {
            second_max = nums[i];
        }

        if (nums[i] < first_min) {
            int64_t tmp = first_min;
            first_min = nums[i];
            second_min = tmp;
        } else if (nums[i] < second_min && nums[i] >= first_min) {
            second_min = nums[i];
        }
    }

    if (first_max * second_max > first_min * second_min) {
        std::cout << second_max << " " << first_max << std::endl;
    } else {
        std::cout << first_min << " " << second_min << std::endl;
    }

    return 0;
}