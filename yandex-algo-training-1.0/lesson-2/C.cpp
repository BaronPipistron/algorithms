#include <iostream>
#include <cmath>
#include <vector>

int main() {
    size_t seqSize;
    int x;
    std::vector<int> seq;

    std::cin >> seqSize;
    for (size_t i = 0; i != seqSize; ++i) {
        int num;
        std::cin >> num;
        seq.push_back(num);
    }
    std::cin >> x;

    int ans = seq[0];
    for (size_t i = 1; i != seqSize; ++i) {
        if (std::abs(x - seq[i]) < std::abs(x - ans)) {
            ans = seq[i];
        }
    }

    std::cout << ans << std::endl;

    return 0;
}