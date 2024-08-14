#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    size_t amountOfParticipants;
    std::vector<int> throwRanges;

    std::cin >> amountOfParticipants;

    for (size_t i = 0; i != amountOfParticipants; ++i) {
        int range;
        std::cin >> range;

        throwRanges.push_back(range);
    }

    size_t max_index { 0 };
    for (size_t i = 1; i != amountOfParticipants; ++i) {
        if (throwRanges[i] > throwRanges[max_index]) {
            max_index = i;
        }
    }

    int vasiliysRange { 0 };
    for (size_t i = max_index + 1; i < amountOfParticipants - 1; ++i) {
        int tmpRange = throwRanges[i];
        int nextRange = throwRanges[i + 1];

        if (tmpRange % 10 == 5 && nextRange < tmpRange) {
            vasiliysRange = std::max(tmpRange, vasiliysRange);
        }
    }

    if (vasiliysRange == 0) {
        std::cout << 0 << std::endl;
        return 0;
    }

    int place { 1 };
    for (size_t i = 0; i != amountOfParticipants; ++i) {
        if (throwRanges[i] > vasiliysRange) ++place;
    }

    std::cout << place << std::endl;

    return 0;
}