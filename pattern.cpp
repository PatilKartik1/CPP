#include <iostream>
using namespace std;
int main()
{
    // int r, c;
    // cin >> r >> c;
    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         if (i == 0 || j == 0 || i == r - 1 || j == c - 1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    //     int n;
    //     cin >> n;
    //     int i = 1;
    //     int count = 1;
    //     while (i <= n)
    //     {
    //         int j = 1;
    //         while (j <= n)
    //         {
    //             cout << count << " ";
    //             count += 1;
    //             j++;
    //         }
    //         cout << endl;
    //         i++;
    //     }
    //     return 0;
    // }

    //     int r, c;
    //     cin >> r >> c;
    //     for (int i = 0; i < r; i++)
    //     {
    //         for (int j = 0; j < c; j++)
    //         {
    //             if (j < i + 1)
    //             {
    //                 cout << "  ";
    //             }
    //             else
    //             {
    //                 cout << "* ";
    //             }
    //         }

    //         cout << endl;
    //     }

    //     return 0;
    // }
    //     int r, c;
    //     cin >> r >> c;

    //     for (int i = 0; i < r; i++)
    //     {
    //         for (int j = 0; j < i + 1; j++)
    //         {

    //             cout << r - j + i;
    //         }

    //         cout << endl;
    //     }

    //     return 0;
    // }

    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            cout << i - j + 1 << " ";

            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
