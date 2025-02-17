#include <iostream>
#include <cmath>

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;

    double D = b * b - 4 * a * c;

    std::cout.precision(12);
    if (D == 0) {
        std::cout << (-1 * b) / (2 * a) << std::endl;
    } else {
        double x_1 = (-b + std::sqrt(D)) / (2 * a);
        double x_2 = (-b - std::sqrt(D)) / (2 * a);

        std::cout << std::min(x_1, x_2) << ' ' << std::max(x_1, x_2) << std::endl;
    }

    return 0;
}