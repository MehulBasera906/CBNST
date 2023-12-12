#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float T, A, Ea, Er, Pr;
    printf("Enter the True Value: ");
    scanf("%f", &T);
    printf("Enter the Approximate Value: ");
    scanf("%f", &A);
    Ea = T - A;
    printf("Absolute Error: %.7f\n", Ea);
    Er = Ea / T;
    printf("Relative Error: %.6f\n", Er);
    Pr = Er * 100;
    printf("Percentage Error = %.4f\n", Pr);
    return 0;
}