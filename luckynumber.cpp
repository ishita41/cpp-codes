#include <iostream>
using namespace std;

// Function to calculate the sum of digits of a number
int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Function to find the lucky number
int findLuckyNumber(int num) {
    while (num >= 10) {
        num = digitSum(num);
    }
    return num;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int luckyNumber = findLuckyNumber(number);
    cout << "The lucky number of " << number << " is: " << luckyNumber << endl;

    return 0;
}
