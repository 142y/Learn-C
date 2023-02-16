// Prompt the user for a number of seconds. 
// Take the user's input and convert the number of seconds into its duration in Hours, Minutes, and remaining Seconds.
// Extra Credit: Make sure the Hours, Minutes, and Seconds print with no decimal places.
#include <stdio.h>

int main()
{
    float hours, minutes, seconds;
    float leftover_seconds;

    printf("Enter the number of seconds: ");
    scanf("%f", &seconds);

    hours = (int)(seconds / 3600);
    minutes = (int)((seconds - (hours * 3600))/60);
    leftover_seconds = (int)(seconds - (hours * 3600) - (minutes * 60));

    printf("%0.0f seconds is equal to %0.0f hours, %0.0f minutes, and %0.0f seconds\n", seconds, hours, minutes, leftover_seconds);
    return 0;
}