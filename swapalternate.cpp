#include <iostream>
using namespace std;

int swapalternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}
int main()
{
    int even[8] = {11, 22, 33, 44, 55, 66, 77, 88};
    int odd[5] = {3, 7, 2, 9, 4};

    swapalternate(even, 8);

    swapalternate(odd, 5);
    print(even, 8);
    cout << endl;
    print(odd, 5);
}