#include <iostream>

void printTriangle(const int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j)
            std::cout << "*";
        std::cout << std::endl;
    }

    for (int i = n - 1; i >= 1; --i) {
        for (int j = 0; j < i; ++j)
            std::cout << "*";
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cin >> n;
    printTriangle(n);
    return 0;
}