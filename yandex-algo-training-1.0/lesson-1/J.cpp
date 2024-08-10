#include <iostream>
#include <tuple>

std::tuple<int, double, double> solveEquationsSystem(double a, double b, double c,
                                                     double d, double e, double f) {

    // TODO
}

int main() {
    double a, b, c, d, e, f;
    std::cin >> a >> b >> c >> d >> e >> f;

    auto ans = solveEquationsSystem(a, b, c, d, e, f);

    int first = std::get<0>(ans);
    double second = std::get<1>(ans);
    double third = std::get<2>(ans);

    std::cout.precision(6);

    if (first == 0 || first == 5) {
        std::cout << first << std::endl;
    } else if (first == 3 || first == 4) {
        std::cout << first << " " << second << std::endl;
    } else {
        std::cout << first << " " << second << " " << third << std::endl;
    }

    return 0;
}