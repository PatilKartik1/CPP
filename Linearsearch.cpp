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
    int n;
    cin >> n;
    int arr[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;
 
    int found = search(arr, n, key);
    if (found == -1)
    {
        cout << "Key is not  Present" << endl;
    }
    else
    {
        cout << "key is present at " << found << " Index" << endl;
    }
}