/* Initialize and assign a value to an integer, float, and char variable. 
Then print each one with a sentence on a new line describing variable data type. */
#include <stdio.h>

int main()
{
    int number = 3;
    float decimal = 3.6;
    char character = 'z';
    // char string[] = "Hello, World!";

    printf("%d is an integer\n", number);
    printf("%f is a float\n", decimal);
    printf("%c is a char\n", character);
    // printf("%s is a char too. Well, technically a string!\n", string);

    return 0;
}