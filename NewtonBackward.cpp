#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<double>> data(n, vector<double>(n + 1, 0));
    cout << "Enter the values of X" << endl;
    for (int i = 0; i < n; i++)
    {
        double temp;
        cin >> temp;
        data[i][0] = temp;
    }
    cout << "Enter the values of Y" << endl;
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
    cout << "Printing the difference table" << endl;
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
    double u = (pred - data[n - 1][0]) / (data[1][0] - data[0][0]);
    cout << endl
         << u << endl;
    double u1 = u;
    double y = data[n - 1][1];
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        y += (u / fact) * data[n - i][i];
        u = u * (u1 + (i - 1));
        fact = fact * i;
    }
    cout << "Predicted Value at " << pred << " = " << y << endl;
    return 0;
}