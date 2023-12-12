#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<double>> data(n, vector<double>(n + 1, 0));
    cout << "Enter the value of X" << endl;
    for (int i = 0; i < n; i++)
    {
        double temp;
        cin >> temp;
        data[i][0] = temp;
    }
    cout << "Enter the value of Y" << endl;
    for (int i = 0; i < n; i++)
    {
        double temp;
        cin >> temp;
        data[i][1] = temp;
    }
    for (int j = 2; j <= n; j++)
    {
        for (int i = 0; i < n - j + 1; i++)
        {
            data[i][j] = data[i + 1][j - 1] - data[i][j - 1];
        }
    }
    cout << "Difference Table = " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
    double pred;
    cin >> pred;
    double u = (pred - data[n / 2 - !(n % 2)][1]) / (data[1][0] - data[0][0]);
    double u1 = u;
    int fact = 1;
    double y = data[n / 2 - !(n % 2)][1];
    for (int i = 2; i <= n; i++)
    {
        y = y + (u / fact) * data[(n - 1 - !(n % 2)) / i][i];
        fact = fact * i;
        if (i % 2 == 0)
        {
            u = u * (u1 - (i / 2));
        }
        else
        {
            u = u * (u1 + (i / 2));
        }
    }
    cout << "The desired value = " << y;
    return 0;
}