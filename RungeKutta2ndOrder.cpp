#include <bits/stdc++.h>
using namespace std;
float f(float x, float y)
{
    return x * x + y;
}
int main()
{
    float x0, y0, h, xn, x, y, k1;
    cout << "Enter the initial values (x0,y0) step-size (h) and end-point(xn)" << endl;
    cin >> x0 >> y0 >> h >> xn;
    x = x0;
    y = y0;
    cout << fixed;
    while (x < xn)
    {
        k1 = y + h * f(x, y);
        y += h * (f(x, y) + f(x + h, k1)) / 2;
        x += h;
        cout << "When x = " << setprecision(4) << setw(8) << x;
        cout << endl
             << "y = " << setw(8) << y << endl;
    }
    return 0;
}