#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // int sum = 0;
    // for (int i = 0; i <= n; i + 2)
    // {
    //     sum += i;
    // }
    // cout << sum << endl;

    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Not Prime for"
                 << " " << i << endl;
        }
        else
        {
            cout << "Prime for"
                 << " " << i << endl;
        }
        i = i + 1;
    }

    return 0;
}