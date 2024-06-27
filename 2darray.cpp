#include <iostream>
using namespace std;
int main()
{
    int rows, colums;
    cout << "Enter array rows & columns" << endl;
    cin >> rows >> colums;

    int arr[100][100];
    cout << "Enter array elements" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}