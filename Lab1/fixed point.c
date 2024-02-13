#include <stdio.h>
#include <math.h>
#define EPS 0.05

float g(float x)
{
    return (pow(M_E,-x));
}

int main()
{
    float x0, x1;
    int n = 1;

    printf("Enter an initial point x0: ");
    scanf("%f", &x0);

    x1 = g(x0);
    while (fabs((x1 - x0) / x1) > EPS)
    {
        n++;
        x0 = x1;
        x1 = g(x0);
        if (g(x1) == x1)
            break;
    }

    printf("The approximate root of given function is %f with %d number of iterations.\n", x1, n);

    return 0;
}
