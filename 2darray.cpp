#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter array length" << endl;
    cin >> a >> b;

    int arr[100][100];
    cout << "Enter array elements" << endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
}