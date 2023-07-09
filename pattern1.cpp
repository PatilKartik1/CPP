#include <iostream>
using namespace std;
int main()
{
    //     int n;
    //     cin >> n;

    //     int i = 1;
    //     while (i <= n)
    //     {
    //         int j = 1;
    //         while (j <= n)
    //         {
    //             char ch = 'A' + j - 1;
    //             cout << ch << " ";
    //             j++;
    //         }
    //         cout << endl;
    //         i++;
    //     }
    //     return 0;

    // int n;
    // cin >> n;

    // int i = 1;
    // char value = 'A';
    // while (i <= n)
    // {
    //     int j = 1;

    //     while (j <= n)
    //     {

    //         cout << value << " ";
    //         value = value + 1;
    //         j++;
    //     }
    //     cout << endl;

    //     i++;
    // }

    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}