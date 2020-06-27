#include <stdio.h>
#define MAXLINE 1000 // Max input line size

int getline(char line[], int maxline);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0)
    {
        if (len > 1)
        {
            printf("%s", line);
        }
    }
    return 0;
}

//getline: read a line into s, return length

int getline(char str[], int lim)
{
    int c, i, j;
    i = j = 0;
    while ((c = getchar()) != EOF && c != '\n')
    {
        if (j < lim)
            str[j++] = c;
        if (c != ' ' && c != '\t')
            i = j;
    }
    if (c == '\n' && i++ < lim)
        str[i - 1] = '\n';
    str[(i < lim) ? i : lim - 1] = '\0';
    return i;
}