// The goal here is to create a program that takes input for five player's point totals and games played totals and then 
// calculates the scoring averages for each player. Create a struct with members for total points and games played. 
// Create an array of structures that is five elements deep (one for each player) and loop through the array filling it 
// with the point totals and games played totals for each player.
#include <stdio.h>

struct players
{
    int points;
    int games;
};

struct players p[5];

int count = 0;
int main()
{
    for (count = 0; count < 5; count++) 
    {
        printf("Enter player %d's point total: ", (count+1));
        scanf("%d", &p[count].points);

        printf("Enter player %d's game total: ", (count+1));
        scanf("%d", &p[count].games);
    }

    printf("\n");

    for (count = 0; count < 5; count++) 
    {
        float avg = (p[count].points)/(p[count].games);
        printf("Player %d's scoring average was %.2f ppg.\n", (count + 1), avg);
    }

    return 0;
}