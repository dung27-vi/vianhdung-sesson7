#include <iostream>
#include <cmath>

int main() {
    int n, original_n, remainder, sum = 0, num_digits = 0;

    std::cout << "Nhap mot so nguyen duong: ";
    std::cin >> n;

    original_n = n;

    // Ðem so chu 
    int temp_n = n;
    while (temp_n != 0) {
        temp_n /= 10;
        ++num_digits;
    }

    // Tinh tong cac luy thua
    temp_n = n;
    while (temp_n != 0) {
        remainder = temp_n % 10;
        sum += pow(remainder, num_digits);
        temp_n /= 10;
    }

    if (sum == original_n) {
        std::cout << original_n << " la mot so Armstrong." << std::endl;
    } else {
        std::cout << original_n << " khong phai la mot so Armstrong." << std::endl;
    }

    return 0;
}
