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

    int c, d;
    cin >> c >> d;
    power(c, d);

    int e, f;
    cin >> e >> f;
    power(e, f);

    int g, h;
    cin >> g >> h;
    power(g, h);
}