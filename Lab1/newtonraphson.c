#include <stdio.h>
#include <math.h>
#define EPS 0.01

float f(float x)
{
    return (sin(x)+pow(x,2)+5*x-9);
}

float fd(float x)
{
    return (cos(x)+2*x+5);
}

int main(void)
{
    float x0, x1;
    int n = 1;

    do
    {
        printf("Enter a valid input point(x0): ");
        scanf("%f", &x0);
    } while (fd(x0) == 0);

    x1 = x0 - (f(x0) / fd(x0));
    while (fabs((x1 - x0) / x1) > EPS)
    {
        n++;
        x0 = x1;
        x1 = x0 - (f(x0) / fd(x0));
        if (f(x1) == 0)
            break;
    }

    printf("The approximate root of given function is: %f with %d number of iterations.\n", x1, n);
    return 0;
}
