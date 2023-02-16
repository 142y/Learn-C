// Intialize and delcare an int variable with any value. 
// Assign a pointer variable to the int variable you just declared and then print the value of the pointer variable.
#include <stdio.h>

int main()
{
    int var = 0;
    int *ptr = &var;

    printf("value of pointer: %p\n", ptr);
}