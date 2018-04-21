#include<stdio.h>

// Exercise 1-14

int main()
{
        int c = 0;
        int freq[256];

        for(int i = 0; i < 256; i++)
                freq[i] = 0;

        while ((c = getchar()) != EOF)
                for (int i = 0; i < 256; i++)
                        if (c == i)
                                freq[i]++;

        for (int i = 0; i < 256; i++) {
                if (freq[i] > 0) {
                        putchar(i);
                        putchar(':');
                        for (int j = 0; j < freq[i]; j++)
                                putchar('x');
                        putchar('\n');
                }
        }
}
