#include <bits/stdc++.h>
using namespace std;
float f(float x, float y)
{
    return x + y * y;
}
int main()
{
    double x0, y0, h, xn, yn, k1, k2, k3, k4, k, x, y;
    cout << "Enter the intial values (x0,y0), Step size (h) & End-point (xn)" << endl;
    cin >> x0 >> y0 >> h >> xn;
    x = x0;
    y = y0;
    cout << fixed;
    while (x < xn)
    {
        k1 = h * f(x, y);
        k2 = h * f(x + h / 2, y + k1 / 2);
        k3 = h * f(x + h / 2, y + k2 / 2);
        k4 = h * f(x + h, y + k3);
        k = (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        x += h;
        y += k;
        cout << "When x = " << setprecision(4) << setw(8) << x;
        cout << endl
             << "y = " << setw(8) << y << endl;
    }
    return 0;
}