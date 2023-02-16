/*  Create an int variable with int variable.
    Create variable that is a pointer to the int variable with int *ptr = &variable.

Use the following variable references to replace the x in the appropriate print statements below:
    *ptr
    variable
    ptr
    &variable

Print statements:
    printf("The value of int variable is: %d\n", x);
    printf("The value of the pointer to the int variable is: %d\n", x);
    printf("The memory address of the int variable is: %d\n", x);
    printf("The value held at the memory location that the pointer is pointing to is: %d\n", x);
*/
#include <stdio.h>

int main()
{
    int var = 3;
    int *ptr = &var;

    printf("The value of int variable is: %d\n", var);
    printf("The value of the pointer to the int variable is: %p\n", ptr);
    printf("The memory address of the int variable is: %p\n", &var);
    printf("The value held at the memory location that the pointer is pointing to is: %d\n", *ptr);
}