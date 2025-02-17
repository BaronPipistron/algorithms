#include <iostream>
#include <cmath>

int main() {
    int x1, y1, r1;
    int x2, y2, r2;

    std::cin >> x1 >> y1 >> r1;
    std::cin >> x2 >> y2 >> r2;

    double dist = std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    if (dist > r1 + r2) {
        std::cout << "NO" << std::endl;
    } else if (dist == 0 && r1 != r2) {
        std::cout << "NO" << std::endl;
    } else if (dist + std::min(r1, r2) < std::max(r1, r2)) {
        std::cout << "NO" << std::endl;
    } else {
        std::cout << "YES" << std::endl;
    }

    return 0;
}