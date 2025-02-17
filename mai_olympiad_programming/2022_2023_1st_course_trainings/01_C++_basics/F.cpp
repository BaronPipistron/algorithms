#include <iostream>

int main()
{
    long long a;
    long long b;

    std::cin >> a >> b;

    if (a > b) {
        long long tmp = a;
        a = b;
        b = tmp;
    }

    std::cout << (b - a + 1) * (a + b) / 2 << std::endl;

    return 0;
}