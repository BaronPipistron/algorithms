#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;

    for (int i; std::cin >> i;) {
        nums.push_back(i);
    }

    int max1 = std::max(nums[0], std::max(nums[1], nums[2]));
    int max3 = std::min(nums[0], std::min(nums[1], nums[2]));
    int max2 = (nums[0] + nums[1] + nums[2]) - max1 - max3;
    
    int min1 = std::min(nums[0], nums[1]);
    int min2 = std::max(nums[0], nums[1]);

    for (size_t i = 2; i != nums.size(); ++i) {
        if (nums[i] < min1) {
            int tmp = min1;
            min1 = nums[i];
            min2 = tmp;
        } else if (nums[i] >= min1 && nums[i] < min2) {
            min2 = nums[i];
        }

        if (nums[i] > max1) {
            int tmp1 = max1;
            int tmp2 = max2;

            max1 = nums[i];
            max2 = tmp1;
            max3 = tmp2;
        } else if (nums[i] > max2 && nums[i] <= max1) {
            int tmp2 = max2;

            max2 = nums[i];
            max3 = tmp2;
        } else if (nums[i] > max3 && nums[i] <= max2) {
            max3 = nums[i];
        }
    }

    int firstAnsCandidate = max1 * max2 * max3;
    int secondAnsCandidate = max1 * min1 * min2;

    if (firstAnsCandidate > secondAnsCandidate) {
        std::cout << max1 << ' ' << max2 << ' ' << max3 << std::endl;
    } else {
        std::cout << max1 << ' ' << min1 << ' ' << min2 << std::endl;
    }

    return 0;
}