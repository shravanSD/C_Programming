#include <stdio.h>

void swap(int *a, int *b);

void main()
{
    int num1, num2;

    printf("Enter two numbers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    swap(&num1, &num2);
    printf("After swapping, number 1 = %d and number 2 = %d\n", num1, num2);
}


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}