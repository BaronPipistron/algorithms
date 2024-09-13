#include <cmath>
#include <cstdint>
#include <iostream>

int main() {
    int64_t a, b, c;
    std::cin >> a >> b >> c;

    int64_t D = b * b - 4 * a * c;

    std::cout.precision(10);

    if (D == 0) {
        std::cout << std::fixed << (-b) / (2.0 * a) << std::endl;

        return 0;
    } 

    double x_1 = (-b - std::sqrt(D)) / (2.0 * a);
    double x_2 = (-b + std::sqrt(D)) / (2.0 * a);

    if (x_1 > x_2)
        std::swap(x_1, x_2);

    std::cout << std::fixed << x_1 << ' ' << x_2 << std::endl;

    return 0;
}