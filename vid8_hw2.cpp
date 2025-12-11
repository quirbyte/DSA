#include <iostream>
using namespace std;
int main()
{
    char ch;
    int num1, num2;
    cout << "Enter the numbers:";
    cin >> num1 >> num2;
    cout << "Which operator to use ? ";
    cin >> ch;
    switch (ch)
    {
    case '+':
        cout << "The result is:" << num1 + num2 << endl;
        break;
    case '-':
        if (num1 > num2)
            cout << "The result is:" << num1 - num2 << endl;
        else
            cout << "The result is:" << num2 - num1 << endl;
        break;
    case '*':
        cout << "The result is:" << num1 * num2 << endl;
        break;
    case '/':
        if (num1 > num2)
            cout << "The result is:" << num1 / num2 << endl;
        else
            cout << "The result is:" << num2 / num1 << endl;
        break;
    case '%':
       if (num1 > num2)
            cout << "The result is:" << num1 % num2 << endl;
        else
            cout << "The result is:" << num2 % num1 << endl;
        break;
    default:
        cout << "This is default case" << endl;
    }
}