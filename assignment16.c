// Initialize an int array of 10 elements and then print the value of the array with printf("%d", array).
// Extra Credit: Use Google to find out why we get a memory address (a pointer!) as our output.
#include <stdio.h>

int main()
{
    int array[10];

    printf("%p\n", array);
    printf("%p\n", &array[0]);
}