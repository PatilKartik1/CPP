#include <iostream>
using namespace std;
int main()
{
    int amount;
    int Rs100, Rs50, Rs20, Rs1;
    cin >> amount;

    switch (1)
    {
    case 1:
        Rs100 = amount / 100;
        amount = amount % 100;
        cout << "100 Rs note are " << Rs100 << endl;

    case 2:
        Rs50 = amount / 50;
        amount = amount % 50;
        cout << "50 Rs note are " << Rs50 << endl;

    case 3:
        Rs20 = amount / 20;
        amount = amount % 20;
        cout << "20 Rs note are " << Rs20 << endl;

    case 4:
        Rs1 = amount / 1;
        amount = amount % 1;
        cout << "1 Rs note are " << Rs1 << endl;
        break;

    default:
        cout << "Not valid " << endl;
        break;
    }
}