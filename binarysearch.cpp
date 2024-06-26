#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int arr[6] = {2, 4, 6, 8, 12, 18};
    int arr1[5] = {3, 8, 11, 14, 16};

    int key;
    cout<<"Enter key!!";
    cin >> key;
    int index = binarysearch(arr1, 5, key);
    bool found = index;

    cout << "Element is present at index " << index << endl;
}
