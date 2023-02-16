// Create a program that prompts the user to input scoring totals for 5 players during 4 basketball games. 
// The program will track which player had the highest scoring average over the 4 games and print the result to the terminal.
// Hint: Use a two-dimensional array and nested for loops. The outer-most for loop will iterate on a per game basis gathering 
// scores for the inner-most for loop interating through players. 
// Use this same model to create arrays to store total scores and to calculate averages.
// Extra Credit: There is none. This one is pretty hard!
#include <stdio.h>

int main()
{
    const int games = 4;
    const int players = 5;

    int scores[4][5];
    int total_score[5];
    int highest_score;
    
    int game_counter, player_counter;

    for(game_counter = 0; game_counter < games; game_counter++)
    {
        printf("Game #%d\n", game_counter+1);

        for (player_counter = 0; player_counter < players; player_counter++)
        {
            printf("Enter scoring total for player #%d: ", player_counter+1);
            scanf("%d", &scores[game_counter][player_counter]);
        }
    }

    for (player_counter = 0; player_counter < players; player_counter++)
	{
		int player_total = 0;
		for (game_counter = 0; game_counter < games; game_counter++)
		{
			player_total += scores[game_counter][player_counter];
		}
		total_score[player_counter] = player_total;
	}

    highest_score = 0;
	int player_id;
	for (player_counter = 0; player_counter < players; player_counter++)
	{
		if (total_score[player_counter] > highest_score)
		{
			highest_score = total_score[player_counter];
            player_id = (player_counter + 1);
		}
	}

	// ppg - points per game
	float ppg = (float)(highest_score / games);
	printf("Player #%d had the highest scoring average at %.2f points per game.\n", player_id, ppg);
	
	return 0;
}