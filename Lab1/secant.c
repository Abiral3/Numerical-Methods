#include <stdio.h>
#include <math.h>
#define EPS 0.01

float f(float x)
{
    return (sin(x)+pow(x,2)+5*x-9);
}

int main(void)
{
    float x0, x1, x2;
    int n = 0;

    do
    {
        printf("Enter two valid initial points a and b: ");
        scanf("%f %f", &x0, &x1);
    } while (f(x0) == f(x1));

    do
    {
        n++;
        x2 = (x0 * f(x1) - x1 * f(x0)) / (f(x1) - f(x0));
        if (f(x2) == 0)
            break;
        x0 = x1;
        x1 = x2;
    } while (fabs((x1 - x0) / x1) > EPS);

    printf("The approximate root of given function is: %f with %d number of iteration.\n", x2, n);
    return 0;
}
