#include <iostream>

int main() {
    int N, K, M;
    std::cin >> N >> K >> M;

    int ans { 0 };

    while (N / K) {
        if (N < K || K < M) break;

        ans += (N / K) * (K / M);
        N = (N % K) + (N / K) * (K % M);
    }

    std::cout << ans << std::endl;

    return 0;
}