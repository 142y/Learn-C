#include <stdio.h>

int main(void)
{
    int c, nl, tab, blanks;
    nl = tab = blanks = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            nl++;
        if (c == '\t')
            tab++;
        if (c == ' ')
            blanks++;
    }
    printf("New line: %d\nTabs: %d\nBlanks: %d\n", nl, tab, blanks);
}