#include <iostream>
using namespace std;

int sort(int array[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int minind = i;
        for (int j = i + 1; j < n; i++)
        {
            if (array[j] < array[minind])
            {
                minind = j;
            }
            swap(array[minind], array[i]);
        }
    }
} 

int main()
{
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sorted = sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << sorted;
    }
    
}