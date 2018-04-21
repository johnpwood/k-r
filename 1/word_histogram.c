#include<stdio.h>

// Exercise 1-13 (done Friday the 13th)

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

        for(int i = 1; i <= MAX_LENGTH; i++) {
                if (lengths[i] > 0){
                        printf("%2d:", i);
                        for (int j = 0; j < lengths[i]; j++)
                                printf("x");
                        printf("\n");
                }
        }
}
