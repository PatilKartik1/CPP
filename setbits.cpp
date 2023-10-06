#include <iostream>
using namespace std;
int setbit(int num)
{

    int ans = 0;
    while (num)
    {
        num = num & (num - 1);
        ans++;
    }
    return ans;
}
int main()
{
    int a, b;
    cin >> a >> b;

    cout << setbit(a) + setbit(b) << endl;
    return 0;
}