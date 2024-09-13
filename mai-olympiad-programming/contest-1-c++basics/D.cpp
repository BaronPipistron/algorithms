#include <iostream>

int main() {
    int airplaneMaxDist;
    int x, y;
    std::cin >> airplaneMaxDist >> x >> y;

    if (x * x + y * y <= airplaneMaxDist * airplaneMaxDist) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}