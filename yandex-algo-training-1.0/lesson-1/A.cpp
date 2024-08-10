#include <algorithm>
#include <cstdint>
#include <iostream>
#include <string>

int main() {
    int16_t troom;
    int16_t tcond;
    std::cin >> troom >> tcond;

    std::string mode;
    std::cin >> mode;

    int16_t ans;

    if (mode == "heat") {
        ans = std::max(troom, tcond);
    } else if (mode == "freeze") {
        ans = std::min(troom, tcond);
    } else if (mode == "auto") {
        ans = tcond;
    } else {
        ans = troom;
    }

    std::cout << ans << std::endl;

    return 0;
}
