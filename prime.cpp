#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int i = 2;
    while (i <= n)
    {
        if (n % i == 0)
        {

            cout << i << " is not a prime no" << endl;
        }
        else
        {
            cout << i << " is a prime no" << endl;
        }
        i++;
    }
}
