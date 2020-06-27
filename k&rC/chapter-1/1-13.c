#include <stdio.h>
#define MAX_WORDLEN 15
#define IN 1
#define OUT 0

int main()
{
    int c;
    int i = 0;
    int j = 0;
    int word = 0;
    int histogram[MAX_WORDLEN + 1];
    int state = IN;

    // Initialize all the elements of histogram to 0
    // [0, 0, 0, 0... 0] meaning empty
    for (i = 0; i <= MAX_WORDLEN; ++i)
    {
        histogram[i] = 0;
    }

    // Check the state of the input
    while ((c = getchar()) != EOF)
    {
        ++word;
        if (c == ' ' || c == '\n' || c == '\t')
        { // new word begins; or a word ends.
            state = OUT;
            --word;
        }
        if (state == OUT)
        { // we are in a word baby
            if (word != 0 && word <= MAX_WORDLEN)
                ++histogram[word];

            state = IN;
            word = 0;
        }
    }

    printf("Horizontal Histogram!\n");
    for (i = 1; i < MAX_WORDLEN; ++i)
    {
        printf("|%2d| ", i);
        for (j = 0; j < histogram[i]; ++j)
        {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}