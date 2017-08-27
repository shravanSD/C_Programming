#include <stdio.h>
#include <math.h>

int poly(int x);

void main()
{
    int x;
    printf("Input x: ");
    scanf("%d", &x);

    printf("The value of %d^4 + %d^3 + 3(%d^2) + 2 is %d.\n", x, x, x, poly(x));
}

int poly(int x)
{
    return ((pow(x, 4) + pow(x, 3) + (3 *pow(x, 2)) + 2));
}