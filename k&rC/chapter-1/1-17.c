#include <stdio.h>
#define MAXLINE 1000 // Max input line size
#define MAXLEN 81

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len = 0;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0)
        if (len > MAXLEN)
        {
            printf("Line: %s\n", line);
        }
    return 0;
}

//getline: read a line into s, return length
int getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i++] = c;
    }
    // null terminating the string!
    s[i] = '\0';
    return i;
}

// copy: copy 'from' into 'to'; assuming 'to' is big enough!
void copy(char to[], char from[])
{
    int i = 0;
    // until you don't encounter the null terminator
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}