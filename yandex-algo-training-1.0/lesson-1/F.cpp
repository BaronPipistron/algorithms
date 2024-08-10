#include <algorithm>
#include <iostream>
#include <utility>

std::pair<int, int> calculateTableSides(int length1, int width1, int length2, int width2) {
    int minSquare = (length1 + length2) * std::max(width1, width2);
    int tableLength = (length1 + length2);
    int tableWidth = std::max(width1, width2);

    if (minSquare > (length1 + width2) * std::max(width1, length2)) {
        minSquare = (length1 + width2) * std::max(width1, length2);

        tableLength = (length1 + width2);
        tableWidth = std::max(width1, length2);
    }

    if (minSquare > (width1 + length2) * std::max(length1, width2)) {
        minSquare = (width1 + length2) * std::max(length1, width2);

        tableLength = (width1 + length2);
        tableWidth = std::max(length1, width2);
    }

    if (minSquare > (width1 + width2) * std::max(length1, length2)) {
        minSquare = (width1 + width2) * std::max(length1, length2);

        tableLength = (width1 + width2);
        tableWidth = std::max(length1, length2);
    }

    return std::make_pair(tableLength, tableWidth);
}

int main() {
    int length1, width1;
    int length2, width2;

    std::cin >> length1 >> width1;
    std::cin >> length2 >> width2;

    std::pair<int, int> ans = calculateTableSides(length1, width1, length2, width2);

    std::cout << ans.first << " " << ans.second << std::endl;

    return 0;
}