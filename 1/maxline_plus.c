#include<stdio.h>

#define MAXLINE 55

//Exercise 1-16

int get_line(char*, int);
void copy(char*, char*);

int main()
{
        int len, max;
        char line[MAXLINE];
        char longest[MAXLINE];

        max = 0;
        while ((len = get_line(line, MAXLINE)) > 0)
                if (len > max) {
                        max = len;
                        copy(longest, line);
                }
        if (max > 0)
                printf("%s\n%d\n", longest, max);
        return 0;
}

int get_line(char* s, int lim)
{
        int c, i;

        for (i=0; (c=getchar())!=EOF && c!='\n'; i++)
                if (i<lim-1)
                        s[i] = c;
        if (c == '\n') {
                if (i > lim -2) {
                        s[lim-2] = '\n';
                        s[lim-1] = '\0';
                        i++;
                        return i;
                }
                s[i] = c;
                i++;
                s[i] = '\0';
        }
        return i;
}

void copy(char* to, char* from)
{
        int i;
        i = 0;
        while ((to[i] = from[i]) != '\0')
                i++;
}
