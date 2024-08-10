#include <iostream>

bool canTrow(int A, int B, int C, int D, int E) {
    if ((A <= D && B <= E) || (A <= E && B <= D)) {
        return true;
    } else if ((A <= D && C <= E) || (A <= E && C <= D)) {
        return true;
    } else if ((B <= D && C <= E) || (B <= E && C <= D)) {
        return true;
    }

    return false;
}

int main() {
    int A, B, C;
    int D, E;

    std::cin >> A >> B >> C;
    std::cin >> D >> E;

    if (canTrow(A, B, C, D, E)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}