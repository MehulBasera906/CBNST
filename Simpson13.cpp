#include <bits/stdc++.h>
using namespace std;
float y(float x)
{
    return 1 / (1 + x * x);
}
int main()
{
    float x0, xn, h, s;
    int n;
    cout << "Enter the lower limit (x0), upper limit (xn) and the number of sub-intervals" << endl;
    cin >> x0 >> xn >> n;
    cout << fixed;
    h = (xn - x0) / n;
    s = y(x0) + y(xn);
    for (int i = 1; i <= n - 1; i++)
    {
        if (i % 2 == 0)
        {
            s += 2 * y(x0 + i * h);
        }
        else
        {
            s += 4 * y(x0 + i * h);
        }
    }
    cout << "Value of the integral is: ";
    cout << setw(6) << setprecision(4) << (h / 3) * s << endl;
    return 0;
}