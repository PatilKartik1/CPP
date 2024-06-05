#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    for (int i : d)
    {
        cout << i << " ";
    }
    // d.pop_front();
    // d.pop_back();
    cout << endl;
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }

    cout << "First index is " << d.at(1) << endl;
    cout << "Front" << d.front() << endl;
    cout << "back" << d.back() << endl;

    cout << "Empty or not" << d.empty() << endl;
    cout << "Before erase" << d.size() << endl;

    d.erase(d.begin(), d.end());
    cout << "After erase" << d.size() << endl;
    for (int i : d)
    {
        cout << i << endl;
    }
}