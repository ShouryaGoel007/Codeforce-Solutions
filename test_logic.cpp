#include <iostream>
#include <vector>

bool has_odd_divisor_slow(long long n) {
    if (n % 2 != 0) return true;
    long long limit = (long long)(sqrt(n));
    for (long long i = 3; i <= limit; i += 2) {
        if (n % i == 0) return true;
    }
    // Wait, the original code had a bug!
    // It sets n = sqrt(n) and then checks n%i == 0 where n is now sqrt(n).
    // Let's re-read the original code.
    return false;
}

int main() {
    std::vector<long long> tests = {2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 16, 18, 32, 64, 1024, 1000000000000000000LL};
    for (long long n : tests) {
        bool fast = (n & (n - 1)) != 0;
        std::cout << n << ": " << (fast ? "Yes" : "No") << std::endl;
    }
    return 0;
}
