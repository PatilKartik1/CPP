#include <iostream>
// #include<algorithm>
using namespace std;
int main()
{
    string str = "Kartik";
    // reverse(str.begin(), str.end());
    string rev_str(str.rbegin(), str.rend());

    cout << rev_str;
}