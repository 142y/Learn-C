// Prompt the user for a Numerator (top number of a fraction) and a Denominator (bottom number of a fraction). 
// Tell the user whether or not there is a remainder using if control flow.
#include <stdio.h>

int main()
{
    int numerator, denominator;
    int remainder;

    printf("Enter a numerator: ");
    scanf("%d", &numerator);

    printf("Enter a denominator: ");
    scanf("%d", &denominator);

    remainder = numerator % denominator;

    if (remainder != 0) {
        printf("Remainder is %d\n", remainder);
    }
    else {
        printf("No Remainder!\n");
    }
    return 0;
}
