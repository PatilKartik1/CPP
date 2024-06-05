#include <iostream>
using namespace std;

int returnmax(int arr[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        }
    return max;
}

int main()
{

    int arr[] = {11, 2, 35, 43, 5, 64, 79, 48};

    int max = returnmax(arr, 7);
    cout << "Max element is:" << max;
    return 0;
}