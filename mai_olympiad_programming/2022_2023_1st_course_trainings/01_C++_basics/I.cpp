#include <iostream>

int main()
{
    int N, M;
    int X, Y;

    std::cin >> N >> M;
    std::cin >> X >> Y;

    int by_height = M / Y;
    int by_width = N / X;

    int ost_by_height = M % Y;
    int ost_by_width = N % X;

    int amount = by_height * by_width;

    if (ost_by_height != 0 && ost_by_width == 0) {
        amount += by_width;
    } else if (ost_by_height == 0 && ost_by_width != 0) {
        amount += by_height;
    } else if (ost_by_height != 0 && ost_by_width != 0) {
        amount += by_height + by_width + 1;
    }

    std::cout << amount << std::endl;

    return 0;
}