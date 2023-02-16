// Prompt the user for a number of coin flips (x) and then simulate (x) number of coin flips and print the results to the terminal.
// Hint: Look up the srand() function.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int count;
    int heads = 0;
    int tails = 0;

    printf("How many times would you like to flip the coin? ");
    scanf("%d", &count);

    // Use current time as seed for random num generator
    srand(time(0));

    for (int i = 0; i < count; i++) {
        int result = (rand() % 2) + 1;
        if (result == 1)
        {
            heads++;
        }
        else if (result == 2) 
        {
            tails++;
        }
    }
    printf("After flipping the coin %d times, the results were\n%d heads\n%d tails", count, heads, tails);
}