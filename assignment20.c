// Create/define a structure (struct) outside of main() that includes an int, char, and float member. 
// Inside of main(), declare values for those struct members and then print their values to the terminal.
#include <stdio.h>
// #include <stdlib.h>

struct datatypes
{
    int integer;
    char characters;
    float decimals;
} dt;


int main()
{
    dt.integer = 3;
    dt.characters = 'U';
    dt.decimals = 3.14;
    
    printf("This is an int: %d\n", dt.integer);
    printf("This is a char: %c\n", dt.characters);
    printf("This is a float: %.2f\n", dt.decimals);

    return 0;
}