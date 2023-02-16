//Initialize a char pointer variable. Use the malloc() function to allocate memory for a char array by assigning the result of malloc() 
//to your pointer. Your program should check that the memory was indeed allocated and if not, print an error message and exit with code 1
//Make sure your allocation size is a multiple of the char data type by using the sizeof() function so the code is portable. 
//Google best practices for using malloc(). Don't forget to use free() to free the memory space before exiting the program if successful.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mem;
    printf("Enter the size of memory to be alloacted: ");
    scanf("%d", &mem);

    char *name = malloc(sizeof(char) * mem);

    if (name == NULL) 
    {
        printf("Memory not allocated!\n");
        return 1;
    }
    else
    {
        printf("Memory allocated!\n");
        free(name);
        printf("Memory freed!\n");
        return 0;
    }
}