#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if ((n & (n - 1)) == 0) {
        std::cout << "Yes, " << n << " is a power of 2." << std::endl;
    } else {
        std::cout << "No, " << n << " is not a power of 2." << std::endl;
    }

    return 0;
}
