#include <stdio.h>

int main(void)
{
    char c, last;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ' || last != ' ')
            putchar(c);

        last = c;
    }
}
