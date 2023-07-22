#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    switch (n % 2)
    {
    case 0:
        cout << "No is Even" << endl;
        break;
    case 1:
        cout << "No is Odd" << endl;

    default:
        cout << "Invalid no" << endl;
        break;
    }
}