#include <stdio.h>

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void main()
{
	int x, y;

	printf("Input two values: ");
	scanf("%d", &x);
	scanf("%d", &y);

	swap(&x, &y);

	printf("X = %d and Y = %d\n", x, y);
}