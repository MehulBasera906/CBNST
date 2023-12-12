#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define E 0.01
float func(float x)
{
    return x * x * x - x * x + 2;
}
void bisect(float a, float b)
{
    int fa = func(a);
    int fb = func(b);
    if (fa * fb >= 0)
    {
        printf("Wrong Value: \n");
        return;
    }
    float Xnew;
    while ((b - a) >= E)
    {
        Xnew = (a + b) / 2;
        if (func(Xnew) == 0.0)
        {
            break;
        }
        else if (func(Xnew) * fa < 0)
        {
            b = Xnew;
        }
        else
        {
            a = Xnew;
        }
    }
    printf("Our Root = %.4f\n", Xnew);
    return;
}
int main()
{
    float a = -200;
    float b = 300;
    bisect(a, b);
    return 0;
}