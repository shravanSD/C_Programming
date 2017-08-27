#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

float volume(float a);
float area(float a);

void main()
{
    float Lradius, Sradius;
    printf("Enter large sphere radius: ");
    scanf("%f", &Lradius);

    printf("Enter small sphere radius: ");
    scanf("%f", &Sradius);

    printf("\nThe volume of liquid needed is %f.\n", (volume(Lradius) - volume(Sradius)));
    printf("The surface area of the sphere in contact with the liquid is %f.", area(Sradius));
}

float area(float a)
{
    return (4 * PI * pow(a, 2));
}

float volume(float a)
{
    return ( (4/3.0) * PI * pow(a, 3) );
}