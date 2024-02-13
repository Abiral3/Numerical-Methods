#include <stdio.h>
#include <math.h>
#define EPS 0.001

float f(float x)
{
    return (sin(x) + pow(x, 2) + 5 * x - 9);
}

int main(void)
{
    float a, b, c;
    int n = 0;

    do
    {
        printf("Enter value of a: ");
        scanf("%f", &a);
        printf("Enter value of b: ");
        scanf("%f", &b);
    } while (f(a) * f(b) >= 0);

    do
    {
        n++;
        c = (a + b) / 2;
        if (f(c) == 0)
            break;
        if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    } while (fabs((b - a) / a) > EPS);

    printf("The approximate root of given function is %f with %d iterations.\n", c, n);
    return 0;
}
