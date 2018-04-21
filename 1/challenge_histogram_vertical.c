#include<stdio.h>

// Exercise 1-13 (done Friday the 13th)
// SINGLE FUNCTION TO CONFORM WITH OUTLINE OF CHAPTER 1

#define MAX_LENGTH 60

int main()
{
        int c = 0;
        int inword = 0;
        int length = 1;
        int lengths[MAX_LENGTH + 1];
        for (int i = 0; i <= MAX_LENGTH; i++)
                lengths[i] = 0;
        while((c = getchar()) != EOF) {
                if (inword) {
                        if (c==' ' || c=='\t' || c=='\n') {
                                if (length >= MAX_LENGTH)
                                        length = MAX_LENGTH-1;
                                lengths[length]++;
                                inword = 0;
                                length = 1;
                        }
                        else {
                                length++;
                        }
                }
                else{
                        if (c!=' ' && c!='\t' && c !='\n')
                                inword = 1;
                }
        }
        /* find maximum height of histogram bars: */
        int max = 0;
        for ( int i = 0; i <= MAX_LENGTH; i++) {
                if (lengths[i] > max)
                        max = lengths[i];
        }
               
        // Draw from the top row down:
        for ( int i = max; i > 0; i-- ) {
                for ( int j = 1; j < MAX_LENGTH; j++ ) {
                        if (lengths[j] >= i)
                                printf("  x");
                        else if ( lengths[j] > 0)
                                printf("   ");
                }
                putchar('\n');
        }
        for ( int j = 0; j < MAX_LENGTH; j++ )
                if ( lengths[j] > 0 )
                        printf(" %2d", j);
        printf("\n");
}
