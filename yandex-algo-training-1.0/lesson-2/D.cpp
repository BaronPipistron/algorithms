#include <iostream>
#include <vector>

int moreNeighbors(const std::vector<int>& seq) {
    if (seq.size() <= 2) return 0;

    int ans { 0 };
    for (size_t i = 1; i != seq.size() - 1; ++i) {
        if (seq[i] > seq[i - 1] && seq[i] > seq[i + 1]){
            ++ans;
        }
    }

    return ans;
}

int main() {
    std::vector<int> seq;
    int num;

    while (std::cin >> num) {
        seq.push_back(num);
    }

    int ans = moreNeighbors(seq);
    
    std::cout << ans << std::endl;

    return 0;
}