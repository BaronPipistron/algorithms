#include <iostream>
#include <vector>

bool isMonotonously(const std::vector<int>& seq) {
    if (seq.size() <= 1) {
        return true;
    }

    for (size_t i = 1; i != seq.size(); ++i){
        if (seq[i] <= seq[i - 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    std::vector<int> nums;
    int num;

    while (std::cin >> num) {
        nums.push_back(num);
    }

    if (isMonotonously(nums)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}