#include <cstdint>
#include <iostream>

int main() {
    int64_t a, b;
    std::cin >> a >> b;

    if (a > b) 
        std::swap(a, b);

    std::cout << (b - a + 1) * (a + b) / 2 << std::endl;

    return 0;
}