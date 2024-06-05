#include <iostream>
using namespace std;

class Array
{
private:
    float *arr;
    int size;

public:
    Array(int s)
    {
        size = s;
        arr = new float[size];
        for (int i = 0; i < size; ++i)
            arr[i] = 0.0f;
    }

    ~Array()
    {
        delete[] arr;
    }

    // Overloading unary ++ (prefix)
    friend Array &operator++(Array &array)
    {
        for (int i = 0; i < array.size; ++i)
            ++array.arr[i];
        return array;
    }

    // Overloading unary -- (prefix)
    friend Array &operator--(Array &array)
    {
        for (int i = 0; i < array.size; ++i)
            --array.arr[i];
        return array;
    }

    // Display function
    void display()
    {
        for (int i = 0; i < size; ++i)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    Array arr(5);

    cout << "Original Array: ";
    arr.display();

    ++arr;
    cout << "After ++: ";
    arr.display();

    --arr;
    cout << "After --: ";
    arr.display();

    return 0;
}
