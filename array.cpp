#include <iostream>
using namespace std;
int main()
{
    string arr[6] = {"Kartik", "Hardik", "Aditya", "pandurang", "prashant", "pravin"};
    arr[0] = "Gaurav";

    for (int i = 0; i <= 5; i++)
    {
        cout << arr[i] << endl;
    }
}