#include<stdio.h>

// Excercise 1-9
int main()
{
        int c;
        while ((c = getchar()) != EOF) {
                putchar(c);
                while (c == ' ') {
                        c = getchar();
                        if (c != ' '){ putchar(c); }
                }
        }
}
