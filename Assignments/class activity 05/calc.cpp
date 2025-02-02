#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2, result;

    // Ask user to choose an operation
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    // Take two numbers as inputs
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform the operation using switch statement
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Handle division by zero using conditional operator
            result = (num2 != 0) ? (num1 / num2) : 0;
            cout << (num2 == 0 ? "Error: Division by zero!\n" : "");
            break;
        default:
            cout << "Invalid operator!" << endl;
            return 1; // Exit with error
    }

    // Display the result
    cout << "Result: " << result << endl;

    return 0;
}
