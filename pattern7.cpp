#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }
        int k = 1;
        while (k <= i - 1)
        {
            cout << "*";
            k++;
        }
        int l = 1;
        while (l <= i - 1)
        {
            cout << "*";
            l++;
        }
        int r = 1;
        while (r <= j)
        {
            cout << j;
            r = r - 1;
        }

        return 0;
    }
}