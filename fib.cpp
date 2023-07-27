#include <iostream>
using namespace std;

int fib(int n)
{
    int a = 0;
    int b = 1;

    cout << a << "\t" << b << "\t";

    for (int i = 1; i <= n; i++)
    {
        int fib = a + b;
        cout << fib << "\t";
        a = b;
        b = fib;
    }
}

int main()
{
    int n;
    cin >> n;

    fib(n);
}