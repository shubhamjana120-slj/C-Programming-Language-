1. Write a program to calculate the area of a circle.

#include <stdio.h>

int main()
{
    float r, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    area = 3.14 * r * r;

    printf("Area of the circle = %f", area);

    return 0;
}


OUTPUT

Enter the radius of the circle: 5
Area of the circle = 78.500000
