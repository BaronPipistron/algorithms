#include <cstdint>
#include <iostream>

int main() {
    uint64_t a;
    uint64_t b;
    uint64_t c;

    std::cin >> a >> b >> c;

    if (a + b > c && b + c > a && a + c > b) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}