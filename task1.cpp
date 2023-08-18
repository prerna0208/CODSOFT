#include <bits/stdc++.h>
using namespace std;

//                           TASK-1
// To develop a calculator in order to have basic arithmetic functions
// addition, subtraction, multiply, division

int main()
{
    cout << "\n-------------------BASIC ARITHMETIC CALCULATOR-----------------------------\n";
    int num1, num2;
    char op;
    string choice;

    cout<<"\n----------------------------WELCOME-----------------------------\n";

    do{
        cout << "\nEnter the first number: ";
        cin >> num1;
        cout << "\nEnter the second number: ";
        cin >> num2;
        cout << "\nEnter '+' for Addition\n";
        cout << "\nEnter '-' for Subtraction\n";
        cout << "\nEnter '*' for Multiplication\n";
        cout << "\nEnter '/' for Division\n";
        cout << "\nEnter '%' for Modulus\n";
        cout << "\nPress '#' for Exit\n";
        cout << "\nEnter the operator for which you want to perform the operation: ";
        cin >> op;

        switch (op)
        {
        case '+':
            cout << "\nSum of two numbers: " << num1 + num2;
            break;

        case '-':
                cout << "\nDifference of two numbers: " << num1 - num2;
            break;

        case '*':
             cout << "\nProduct of two numbers: " << num1 * num2;
            break;

        case '/':
            if (num2 == 0)
            {
                cout << "\nDivision by zero cannot be performed. \n";
            }
            else
            {
                cout << "\nQuotient of two numbers: " << num1 / num2;
            }
            break;

        case '%':
            if (num2 == 0)
            {
                cout << "\nModulus cannot be performed when the denominator is zero. \n";
            }
            else
            {
                cout << "\nRemainder of two numbers: " << num1 % num2;
            }
            break;

        case '#':
            exit(0);
            cout << "\nThank You!";

        default:
            cout << "\nPlease choose from above options only!!!\n";
            break;
        }

        cout << "\n\nDo you want to continue??\n";
        cout << "\nEnter your choice(Y/N): ";
        cin >> choice;
    }while (choice == "Y" || choice=="y");
    return 0;
}
