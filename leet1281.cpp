#include <iostream>
using namespace std;
int digitProductSumDifference(int n)
{
    int product = 1;
    int sum = 0;

    while (n > 0)
    {
        int digit = n % 10;
        product *= digit;
        sum += digit;
        n /= 10;
    }

    return product - sum;
}

int main()
{
    int n = 234;
    int difference = digitProductSumDifference(n);
    cout << "Difference: " << difference << endl;

    return 0;
}
