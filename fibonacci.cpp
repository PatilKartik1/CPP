#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n(n>2)";
    cin >> n;
    int a = 0, b = 1;
    cout << a << "\t" << b << "\t";
    for (int i = 1; i < n; i++)
    {
        int nextf = a + b;
        cout << nextf << "\t";

        a = b;
        b = nextf;
    }
}