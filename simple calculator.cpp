#include <iostream>
using namespace std;

class Calculator
{
public:
    // Function to add two numbers
    int add(int a, int b)
    {
        return a + b;
    }

    // Function to subtract two numbers
    int subtract(int a, int b) 
	{
        return a - b;
    }

    // Function to multiply two numbers
    int multiply(int a, int b) 
	{
        return a * b;
    }

    // Function to divide two numbers
    int divide(int a, int b) 
	{
        if (b == 0)
	    {
            std::cout << "Error: Cannot divide by zero." << std::endl;
            return 0;
        }
        return a / b;
    }
};

int main() 
{
    Calculator calc;
    int a, b;
    char op;

    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;
    std::cout << "Enter the operation (+, -, *, /): ";
    std::cin >> op;

    switch (op) 
	{
        case '+':
            std::cout << "The result is: " << calc.add(a, b) << std::endl;
            break;
        case '-':
            std::cout << "The result is: " << calc.subtract(a, b) << std::endl;
            break;
        case '*':
            std::cout << "The result is: " << calc.multiply(a, b) << std::endl;
            break;
        case '/':
            std::cout << "The result is: " << calc.divide(a, b) << std::endl;
            break;
        default:
            std::cout << "Invalid operator." << std::endl;
    }

    
};

