#include<stdio.h>

int main()
{
        //excercise 1-6:
        printf("%d", EOF);

        //excercise 1-7:
        printf("%d", getchar() != EOF);
        
        int c;
        c = getchar();
        while (c != EOF) {
                putchar(c+1);
                c = getchar();
        }
}
