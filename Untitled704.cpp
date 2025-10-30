#include <iostream>

int main() {
    int m, n;
    std::cout << "Nhap chieu dai m: ";
    std::cin >> m;
    std::cout << "Nhap chieu rong n: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}
