#include <iostream>
#include <string>

int main() {
    int num1, num2, num3; // Declare two integer variables to store user input

    std::cout << "Enter thre numbers: "; // Prompt the user to enter two numbers
    std::cin >> num1 >> num2 >> num3; // Read the user input and store it in num1 and num2

    if(num1 > num2 && num2 > num3) {
      std::cout << "In order" << std::endl;

    } else if (num1 < num2 && num2 < num3) {
      std::cout << "In order" << std::endl;
    } else {
      std::cout << "Not in order" << std::endl;
    }

    return 0; // Indicate successful program execution
}