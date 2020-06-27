#include <stdio.h>
#define CHARACTERS 26

int main()
{
    int i;
    char c;
    char histogram[CHARACTERS] = {}; //Initializing all elements as NULL - more elegant than the for loop?

    // Check the state of the input
    while ((c = getchar()) != EOF)
    {
        // lower case alphabets
        if (c >= 'a' && c <= 'z')
            histogram[c - 'a']++;
        // UPPER case alphabets
        else if (c >= 'A' && c <= 'Z')
            histogram[c - 'A']++;
        // what about numbers? meta-chars?
    }

    for (i = 0; i < CHARACTERS; i++)
    {
        printf("%c| ", i + 'A');
        while (histogram[i] > 0)
        {
            putchar('*');
            histogram[i]--;
        }
        putchar('\n');
    }
    return 0;
}
