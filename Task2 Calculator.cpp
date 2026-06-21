#include <iostream>

using namespace std;

int main()
{
    float num1, num2;
    char operation;

    cout << "==============================" << endl;
    cout << "        SIMPLE CALCULATOR" << endl;
    cout << "==============================" << endl;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    switch(operation)
    {
        case '+':
            cout << "Result = " << num1 + num2;
            break;

        case '-':
            cout << "Result = " << num1 - num2;
            break;

        case '*':
            cout << "Result = " << num1 * num2;
            break;

        case '/':
            if(num2 != 0)
                cout << "Result = " << num1 / num2;
            else
                cout << "Error: Cannot divide by zero";
            break;

        default:
            cout << "Invalid Operation";
    }

    return 0;
}