#include <stdio.h>

void main() {
	int r, area, volume;
	printf("Input radius of sphere: ");
	scanf("%d", &r);
	
	area = (4*3.142*r*r);
	volume = ((4/3)*3.142*r*r*r);

	printf("The area and the volume of the sphere are: %d and %d respectively\n", area, volume);
}
