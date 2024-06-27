#include <iostream>
using namespace std;

int pivot(int arr[], int n)
{
    int start = 0, end = n - 1;
    int mid = (start + end) / 2;

    while (start < end)
    {
        if (arr[mid] > arr[end])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = (start + end) / 2; 
    }
    return arr[start];
}
int main()
{

    int arr[7] = {9,8, 7,6,1,2,3};
 
    cout << "pivot is " << pivot(arr, 6);
}