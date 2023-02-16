// Prompt the user for A, B, and C values and then use those values to determine the value of 'X' using the Quadratic Formula.
// Hint: Make your life easier by including the math.h header file. 
// You may have to search online for an additional flag for gcc to get your code compiled correctly!
// Extra Credit: Build in a mechanism which checks the solution by plugging it back into the formula and seeing if it equals 0. 
// Use if control flow to instruct the user to double check all solutions which aren't confirmed 
// (a lot won't be confirmed since they'll be truncated decimals).
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;

    printf("Enter the value of variable 'A': ");
    scanf("%f", &a);

    printf("Enter the value of variable 'B': ");
    scanf("%f", &b);

    printf("Enter the value of variable 'C': ");
    scanf("%f", &c);

    float x1 = (-b + sqrt((b*b)-(4*a*c)))/(2*a);
    float x2 = (-b - sqrt((b*b)-(4*a*c)))/(2*a);

    if (((a*(x1*x1)) + (b*x1) + c) == 0)
    {
        printf("The solution using the '+' operator is: %f\n", x1);
    }
    else {
        printf("The solution using the '+' operator is: %f, but you might want to double-check that...\n", x1);
    }

    if (((a*(x2*x2)) + (b*x2) + c)==0)
    {
        printf("The solution using the '-' operator is: %f\n", x2);
    }
    else {
        printf("The solution using the '-' operator is: %f, but you might want to double-check that...\n", x2);
    }
    return 0;
}