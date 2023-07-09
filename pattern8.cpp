#include <iostream>

int main()
{
    int n = 5;
    int i = 1;

    while (n >= 1)
    {
        int j = 1;

        // Print numbers from 1 to n
        while (j <= n)
        {
            std::cout << j;
            j++;
        }

        // Print asterisks
        int asterisks = 2 * (i - 1);
        while (asterisks > 0)
        {
            std::cout << "*";
            asterisks--;
        }

        // Print numbers from n to 1 in reverse
        j = n;
        while (j >= 1)
        {
            std::cout << j;
            j--;
        }

        std::cout << std::endl;
        n--;
        i++;
    }

    return 0;
}
