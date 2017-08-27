#include <stdio.h>

int minInt(int a[], int n);
int maxInt(int a[], int n);

void main()
{
    int n, i;
    printf("How many numbers to be entered? ");
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("%d. ", i+1);
        scanf("%d", &a[i]);
    }

    printf("The minimum integer is %d.\n", minInt(a, n));
    printf("The maximum integer is %d.\n", maxInt(a, n));
}

int minInt(int a[], int n)
{
    int i, min = a[0];
    for (i = 0; i < n; i++)
        if (a[i] < min)
            min = a[i];
    return min;
}

int maxInt(int a[], int n)
{
    int i, max = a[0];
    for (i = 0; i < n; i++)
        if (a[i] > max)
            max = a[i];
    return max;
}