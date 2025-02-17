#include <iostream>

int main()
{
    double x1, y1;
    double x2, y2;
    double x3, y3;

    std::cin >> x1 >> y1;
    std::cin >> x2 >> y2;
    std::cin >> x3 >> y3;

    double area = 0.5 * ((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));

    if (area < 0) {
        area *= -1;
    }

    std::cout.precision(12);
    std::cout << area << std::endl;

    return 0;
}