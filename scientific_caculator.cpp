#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;
    
    std::cout << "Welcome to the Simple Calculator!\n";
    
    while (true) {
        std::cout << "\nEnter an operation (+, -, *,%, /) or 'q' to quit: ";
        std::cin >> op;
    
        if (op == 'q') {
            std::cout << "Exiting the calculator. Goodbye!\n";
            break;
        }

        std::cout << "Enter two numbers: ";
        std::cin >> num1 >> num2;

        switch (op) {
            case '+':
                std::cout << "Result: " << num1 + num2 << std::endl;
                break;
            case '-':
                std::cout << "Result: " << num1 - num2 << std::endl;
                break;
            case '*':
                std::cout << "Result: " << num1 * num2 << std::endl;
                break;
            case '%':
                if (static_cast<int>(num2) != 0)  // Prevent division by zero
                    std::cout << "Result: " << static_cast<int>(num1) % static_cast<int>(num2) << std::endl;
                else
                    std::cout << "Error! Modulus by zero is not allowed.\n";
                break;
            case '/':
                if (num2 != 0)
                    std::cout << "Result: " << num1 / num2 << std::endl;
                else
                    std::cout << "Error! Division by zero is not allowed.\n";
                break;
            default:
                std::cout << "Invalid operation! Please enter +, -, *, or /.\n";
        }
    }

    return 0;
}
