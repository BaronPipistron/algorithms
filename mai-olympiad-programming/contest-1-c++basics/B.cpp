#include <iostream>

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;

    std::cout.precision(10);
    std::cout << (a + b) * c << std::endl;

    return 0;
}