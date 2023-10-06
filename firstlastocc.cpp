#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int LastOcc(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;

    int arr[100];
    cout << "Enter element of arr:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    cout << "Element is first occured  at index " << firstOcc(arr, n, key) << endl;
    cout << "Element is last occured  at index " << LastOcc(arr, n, key) << endl;
}