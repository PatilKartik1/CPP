#include <iostream>
#include <array>
using namespace std;
int main()
{
//STL ARRAYS;
    array<int, 5> arr = {1, 2, 3, 4, 5};
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "Element at index 2 : " << arr.at(2) << endl;

    cout << "array isw empty  : " << arr.empty() << endl;

    cout << "First element is " << arr.front() << endl;

     cout << "last element is " << arr.back() << endl;


}