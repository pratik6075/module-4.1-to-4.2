#include <iostream>
using namespace std;

// Function overloading for addition
int add(int a, int b) {
    return a + b;
}

// Function overloading for subtraction
int subtract(int a, int b) {
    return a - b;
}

// Function overloading for multiplication
int multiply(int a, int b) {
    return a * b;
}

// Function overloading for division
int divide(int a, int b) {
    return a / b;
}

int main() 
{
    int num1, num2;
    char operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    switch (operation)
    { 
        case '+':
            cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid operation" << endl;
    }

}

