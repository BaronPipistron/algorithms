#include <iostream>
#include <vector>

int main() {
    std::vector<int> seq;
    int num;

    while (std::cin >> num) {
        if (num == -2000000000) {
            break;
        }

        seq.push_back(num);
    }

    bool constant = true;
    bool ascending = true, weaklyAnscending = true;
    bool descending = true, weaklyDescending = true;

    for (size_t i = 1; i != seq.size(); ++i) {
        if (seq[i - 1] == seq[i]) {
            ascending = false;
            descending = false;
        } else if (seq[i - 1] < seq[i]) {
            descending = false;
            weaklyDescending = false;
            constant = false;
        } else if (seq[i - 1] > seq[i]) {
            ascending = false;
            weaklyAnscending = false;
            constant = false;
        } else if (seq[i - 1] <= seq[i]) {
            ascending = false;
            descending = false;
            weaklyDescending = false;
        } else if (seq[i - 1] >= seq[i]) {
            ascending = false;
            descending = false;
            weaklyAnscending = false;
        }
    }

    if (constant) {
        std::cout << "CONSTANT" << std::endl;
    } else if (ascending) {
        std::cout << "ASCENDING" << std::endl;
    } else if (weaklyAnscending) {
        std::cout << "WEAKLY ASCENDING" << std::endl;
    } else if (descending) {
        std::cout << "DESCENDING" << std::endl;
    } else if (weaklyDescending) {
        std::cout << "WEAKLY DESCENDING" << std::endl;
    } else {
        std::cout << "RANDOM" << std::endl;
    }

    return 0;
}