#include <iostream>
#include <vector>

int numsNeedToSymmetric(const std::vector<int>& seq) {
    size_t seqSize = seq.size();
    
    if (seqSize == 1) {
        return 0;
    } else if (seqSize == 2 ) {
        return (seq[0] == seq[1]) ? 0 : 1;
    }

    
}

int main() {
    int seqSize;
    std::vector<int> seq;

    std::cin >> seqSize;
    for (size_t i = 0; i != seqSize; ++i) {
        int num;
        std::cin >> num;
        seq.push_back(num);
    } 

    
}