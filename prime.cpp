#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " "
                 << "Is Not a Prime number";
            break;
        }
        else
        {
            cout << n << " "
                 << "Is a Prime number";
        }
        return 0;
    }
}
