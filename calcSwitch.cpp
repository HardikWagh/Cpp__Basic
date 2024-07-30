#include <iostream>
using namespace std;

int main() {
    double a, b;
    char operation;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> b;

    switch (operation) {
        case '+':
            cout << "Result: " << a + b << endl;
            break;
        case '-':
            cout << "Result: " << a - b << endl;
            break;
        case '*':
            cout << "Result: " << a * b << endl;
            break;
        case '/':
            if (b != 0) {
                cout << "Result: " << a / b << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
    }

    return 0;
}
