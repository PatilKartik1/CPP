#include <iostream>
using namespace std;

int main()
{

    int num1, num2, num3;

    cin >> num1 >> num2 >> num3;

    int greatest = num1;
    if (num2 > greatest)
    {
        greatest = num2;
    }
    if (num3 > greatest)
    {
        greatest = num3;
    }

    cout << "The greatest number is: " << greatest << endl;

    return 0;
}
