#include <iostream>

void solveEquation(double a, double b, double c) {
    if (c < 0) {
        std::cout << "NO SOLUTION" << std::endl;
        return;
    }

    if (a == 0) {
        if ((b == 0 && c == 0) || (c * c == b)) {
            std::cout << "MANY SOLUTIONS" << std::endl;
            return;
        }

        std::cout << "NO SOLUTION" << std::endl;
        return;
    }

    double x = (c * c - b) / a;

    if (x == static_cast<int64_t>(x)) {
        std::cout << x << std::endl;
    } else {
        std::cout << "NO SOLUTION" << std::endl;
    }
}

int main() {
    double a;
    double b;
    double c;

    std::cin >> a >> b >> c;

    solveEquation(a, b, c);

    return 0;
}