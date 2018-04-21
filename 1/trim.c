#include<stdio.h>
#define MAXLINE 1000

// Exercise 1-18

int get_line(char*, int);

int main()
{
        char line[MAXLINE];
        int length;
        int i;

        while((length = get_line(line, MAXLINE))!=0) {
                for(i=length-2; i>0 && (line[i]=='\t'||line[i]==' '); i--){;}
                line[i+1] = '\n';
                line[i+2] = '\0';
                if (length>1) { printf("%s", line); }
        }
        return 0;
}

int get_line(char* s, int lim)
{
        int c, i;

        for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; i++)
                s[i] = c;
        if (c == '\n') {
                s[i] = c;
                i++;
        }
        s[i] = '\0';
        return i;
}
