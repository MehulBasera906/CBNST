#include <stdio.h>
#include <math.h>
int main()
{
    float T, TV, RD;
    int D;
    printf("Enter a True Value: ");
    scanf("%f", &T);
    printf("Enter the number of decimal place you want");
    scanf("%d", &D);
    float factor = pow(10, D);
    TV = (int)(T * factor) / factor;
    RD = (int)(T * factor + 0.5) / factor;
    printf("Original Value %f\n", T);
    printf("Truncated Value %f\n", TV);
    printf("Rounded Value %f\n", RD);
    return 0;
}