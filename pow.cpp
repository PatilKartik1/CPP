#include <iostream>
#include <math.h>
using namespace std;
int power(int x, int y)
{
    int ans = pow(x, y);
    cout << "Answer is " << ans << endl;
}

int main()
{

    int a, b;
    cin >> a >> b;
    power(a, b);

    
}