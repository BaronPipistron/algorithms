#include <iostream>

struct Point {
    double x;
    double y;
};

std::istream& operator >> (std::istream& is, struct Point& point) {
    is >> point.x >> point.y;

    return is;
}

int main() {
    struct Point a;
    struct Point b;
    struct Point c;

    std::cin >> a >> b >> c;

    double square = std::abs(0.5 * (a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y)));

    std::cout.precision(10);
    std::cout << square << std::endl;

    return 0;
}