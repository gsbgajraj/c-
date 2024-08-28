#include <iostream>
#include <cmath>

bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int numDigits = 0;

    while (num != 0) {
        num /= 10;
        numDigits++;
    }

    num = originalNum;

    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isArmstrong(number))
        std::cout << number << " is an Armstrong number.";
    else
        std::cout << number << " is not an Armstrong number.";

    return 0;
}
