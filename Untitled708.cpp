#include <iostream>

int main() {
    long long n;
    int x;
    int count = 0;

    // Nhap so n va chu so x
    std::cout << "Nhap so nguyen n: ";
    std::cin >> n;
    std::cout << "Nhap chu so x (0-9): ";
    std::cin >> x;

    // Xu ly truong hop n = 0
    if (n == 0 && x == 0) {
        count = 1;
    } else if (n == 0 && x != 0) {
        count = 0;
    } else {
        // Vong lap da dem
        long long temp_n = n;
        while (temp_n != 0) {
            int digit = temp_n % 10;
            if (digit == x) {
                count++;
            }
            temp_n /= 10;
        }
    }

    // In ket qua
    std::cout << "Chu so " << x << " xuat hien " << count << " lan trong so " << n << std::endl;

    return 0;
}
