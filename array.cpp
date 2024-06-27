#include <iostream>
#include <climits>
using namespace std;

// int min(int arr[], int n)
// {

//     int min = INT_MAX;

//     for (int i = 0; i < n; i++)
//     {
//         if (min > arr[i])
//         {
//             min = arr[i];
//         }
//     }
//     return min;
// }
// int max(int arr[], int n)
// {

//     int max = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     return max;
// }

int main()
{
    int arr[5] = {11, 24, 52, 83, 94};

    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    cout<<sum << endl;
}