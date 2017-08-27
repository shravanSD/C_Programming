#include <stdio.h>

void inputArray(int *(A[]), int n);
void displayArray(int *(A[]), int n);

void main()
{
    int n;
    printf("How many numbers to be entered? ");
    scanf("%d", &n);

    int *numArray[n];

    inputArray(numArray, n);
    displayArray(numArray, n);
}

void inputArray(int *(A[]), int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &A[i]);
    }
}

void displayArray(int *(A[]), int n)
{
    //printf("a");
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d. %d\n", i, *(&A[i]));
    }
}