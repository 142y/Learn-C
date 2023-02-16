/*
Ask the user for a number between 1 and 500 and then display what range that number is in from the following:
    1 - 100
    101 - 200
    201 - 300
    301 - 400
    401 - 500
*/
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number between 1 and 500: ");
    scanf("%d", &num);

    if (num >= 1 && num <= 100) 
    {
        printf("Number is between 1 and 100\n");
    }
    else if (num >= 101 && num <= 200)
    {
        printf("Number is between 100 and 200\n");
    }
    else if (num >= 201 && num <= 300)
    {
        printf("Number is between 200 and 300\n");
    }
    else if (num >= 301 && num <= 400)
    {
        printf("Number is between 300 and 400\n");
    }
    else if (num >= 401 && num <= 500)
    {
        printf("Number is between 400 and 500\n");
    }
    else {
        printf("Number was not in any of our ranges.\n");
    }
    return 0;
}