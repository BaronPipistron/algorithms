#include <iostream>

int main()
{
    int D;
    int X, Y;

    std::cin >> D >> X >> Y;

    if (D * D >= X * X + Y * Y) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}