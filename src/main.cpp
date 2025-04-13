#include <iostream>
#include "calculator.h"
#include "maths.h"
using namespace std;

int main() {
    cout << "calculator application with folder." << endl;
    Calculator calc;
    double num1, num2;

    char op;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the operator: ";
    cin >> op;

    try {
        switch (op) {
            case '+':
                cout << num1 << " + " << num2 << " = " << calc.add(num1, num2) << endl;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << calc.subtract(num1, num2) << endl;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << calc.multiply(num1, num2) << endl;
                break;
            case '/':
                cout << num1 << " / " << num2 << " = " << calc.divide(num1, num2) << endl;
                break;
            default:
                cout << "Invalid operator." << endl;
                break;
        }
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    cout << "cube of 3 is: " << MathFunctions::cube(3) << endl;
    return 0;
}
