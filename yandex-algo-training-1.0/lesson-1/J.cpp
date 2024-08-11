#include <iostream>
#include <tuple>

double calculateCoefficient(double a, double b) {
    if (a == 0 && b == 0) {
        return 0;
    } else if (a != 0 && b == 0) {
        return 0;
    }

    return (a / b);
}

std::tuple<int, double, double> solveEquationsSystem(double a, double b, double c,
                                                     double d, double e, double f) {

    double det = a * d - b * c;

    if (det != 0) {
        double detX = e * d - b * f;
        double detY = a * f - e * c;

        double x = detX / det;
        double y = detY / det;

        return std::make_tuple(2, x, y);
    }
    
    if (a == 0 && b == 0 && e == 0 && c == 0  && d == 0 && f == 0) {
        return std::make_tuple(5, 0, 0);
    }

    double aCoefficient = calculateCoefficient(a, c);
    double bCoefficient = calculateCoefficient(b, d);
    double cCoefficient = calculateCoefficient(e, f);

    if ((aCoefficient == bCoefficient && bCoefficient != cCoefficient && a != (-c) && b != (-d)) ||
        (a == 0 && b == 0 && e == 0 && c == 0  && d == 0 && f != 0) ||
        (a == 0 && b == 0 && e != 0 && c == 0  && d == 0 && f == 0)) {
        return std::make_tuple(0, 0, 0);
    }

    if (a == 0 && c == 0 && b != 0 && d != 0) {
        return std::make_tuple(4, e / b, 0);
    }

    if (a != 0 && c != 0 && b == 0 && d == 0) {
        return std::make_tuple(3, e / a, 0);
    }

    if ((aCoefficient == bCoefficient && bCoefficient == cCoefficient) ||
        (aCoefficient == bCoefficient && e == f)) {
        double k_coef = -(a / b);
        double b_coef = ((e / b) == 0) ? 0 : (e / b);

        return std::make_tuple(1, k_coef, b_coef);
    }
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