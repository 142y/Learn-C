/* 
Prompt the user to input their first and last name and then print them a welcome message. 
Try storing the input as a char variable's value.
Easy Mode: Allocate an arbitrary amount of indices to your char array and pray to the gods that the user input fits.
Extra Credit: Dynamically allocate the array size of your char variable based on the length of the user's input. 
*/
#include <stdio.h>
#include <stdlib.h>

/* Need to implement manual memory allocation using the below struct - lil' help from my discord dudes!
struct flex_line
{
  int size;
  int used;
  char *data;
}; */

int main(void)
{
    //dynamically assigning memory - this shit doesn't work on windows! PIECE OF SHIT CODE!
    char *first;
    char *last;

    printf("Enter your first name: ");
    scanf("%s", &first);

    printf("Enter your last name: ");
    scanf("%s", &last);

    printf("Welcome %s %s\n", first, last);

    //freeing the allocated mem
    free(first);
    free(last);
}