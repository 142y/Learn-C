/* Prompt the user to input the length of a radius and then print the area of the user's circle to the terminal.
Extra credit: Use the #define feature of C to assign the value 3.14 to PIE. */
#include <stdio.h>
#define PIE 3.14

int main()
{
    float radius, area;
    
    printf("Enter the radius of your circle: ");
    scanf("%f", &radius);

    area = PIE * (radius * radius);

    printf("Area of your circle is %f", area);

    return 0;
}