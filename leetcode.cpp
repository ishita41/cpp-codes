#include <iostream>

class Solution {
public:
    int subtractProductAndSum(int n) {
        int mul = 1, sum = 0;
        while (n != 0) {
            int x = n % 10;
            sum += x;
            mul *= x;
            n = n / 10;
        }
        return mul - sum;
    }
};

int main() {
    Solution solution;
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    int result = solution.subtractProductAndSum(n);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
