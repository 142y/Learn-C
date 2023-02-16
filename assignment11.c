// Ask the user for test scores and then keep asking the user if they would like to continue or end the program. 
// Store all test score values and calculate an average score that prints to the terminal when the user ends the program. 
// You can initialize your array size as 10 and let's use a max test score count of 8 for this.
// Print the average of the test scores to the second decimal place.
// Hint: Look up while and for loops. Look up the strcmp() function.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARRAY_LEN 10

int main(void)
{
    float *ts = malloc(sizeof(float)*ARRAY_LEN);
    char ans[] = "Y";
    int scores = 0;

    while (strcmp(ans, "Y") == 0)
    {
        printf("Enter a test score: ");
        scanf("%f", &ts[scores]);
        scores++;

        printf("Would you like to contiue? [Y/N] ");
        scanf("%s", &ans);
    }
    
    int loop, sum = 0;

    for (loop = 0; loop < scores; loop++)
    {
        sum += ts[loop];
    }

    float avg = (float)sum/loop;
    printf("%.2f is the average!", avg);
}