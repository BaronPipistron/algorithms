#include <iostream>

int main()
{
    double A;
    double B;
    double C;

    std::cin >> A >> B >> C;

    std::cout.precision(9);
    std::cout << (A + B) * C << std::endl;

    return 0;
}