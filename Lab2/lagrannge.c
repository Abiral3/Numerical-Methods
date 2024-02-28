//Lagrange's Method
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float x[15], f[15], fp, lf, sum, xp;

    printf("\nInput the number of data: ");
    scanf("%d", &n);
    printf("Input data:\n ");

    for (int i = 0; i < n; i++)
    {
    	printf("x[%d]: ",i);
        scanf("%f", &x[i]);
        printf("F[%d]: ",i);
        scanf("%f", &f[i]);
    }
        printf("\nInput x at which interpolation is required: ");
        scanf("%f", &xp);
        sum = 0.0;
        for (int i = 0; i < n; i++)
        {
            lf = 1.0;
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                    lf = lf * (xp - x[j]) / (x[i] - x[j]);
            }
            sum += lf * f[i];
        }
        fp = sum;

        printf("\nInterpolated function value at x = %.5f is %.5f.\n", xp, fp);
    return 0;
}
