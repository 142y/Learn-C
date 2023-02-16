// Take two command line arguments from the user, their first and last name, and then print a welcome message for the user.
// The program should check for two arguments and then print the program's usage instructions if the user submits too few 
// or too many arguments.
#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc < 3 || argc > 3) {
        printf("Usage: ./assignment9 firstname lastname\n");
    }
    else {
        printf("Welcome %s %s\n", argv[1], argv[2]);
    }
    return 0;
}