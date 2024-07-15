#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char choice;

    cout << "Enter choice(+,-,*,/,%)";
    cin >> choice;

    cout << "Enter value of a and b:";
    cin >> a >> b;

    switch (choice)
    {
    case '+':
        cout << a + b << endl;
        break;

    case '-':
        cout << a - b << endl;
        break;

    case '*':
        cout << a * b << endl;
        break;

    case '/':
        cout << a / b << endl;
        break;

    case '%':
        cout << a % b << endl;
        break;

    default:
        cout << "Please enter a valid operation" << endl;
    }
}