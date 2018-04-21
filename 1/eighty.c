#include<stdio.h>

#define MAXLINE 1000
#define MAGIC_NUMBER 80

//Exercise 1-17

int get_line(char*, int);
void copy(char*, char*);

int main()
{
        int len;
        char line[MAXLINE];

        while ((len = get_line(line, MAXLINE)) > 0) // eighty is quite a large number of characters to be in a line.
                if (len > MAGIC_NUMBER)
                        printf("%s", line);
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

