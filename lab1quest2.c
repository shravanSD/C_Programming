#include <stdio.h>

void main()
{
	int i, sum = 0, num = 0;
	printf("Input numbers:\n");
	do
	{
		scanf("%d", &i);
		if ((i > 0) && (i%2==0))
		{
			sum+=i;
			num++;
		}
	}while (i != -1);
	printf("The number of even numbers is %d and the sum of the %d numbers is %d.\n", num, num, sum);
}
