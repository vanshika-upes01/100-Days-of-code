// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main ()
{
    float length, breadth, area, perimeter;

    // input length and breadth
    printf("Enter length and breadth of the rectengle:");
    scanf("%f %f", &length, &breadth);
    // calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    // output area and perimeter 
    printf("Area of rectengle: %.2f\n", area );
    printf("Perimeter of rectengle: %.2f\n", perimeter);
    return 0;
}