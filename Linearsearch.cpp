#include <iostream>
using namespace std;

int search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int key;
    cin >> key;

    int found = search(arr, 5, key);
    if (found == -1)
    {
        cout << "Key is not  Present" << endl;
    }
    else
    {
        cout << "key is present at" << found << "Index" << endl;
    }
}