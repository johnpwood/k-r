#include<stdio.h>

//1-8
int main()
{
        int c, sc;

        while((c = getchar()) != EOF){
                if (c==' ' || c=='\t' || c=='\n')
                        sc++;
        }
        printf("%d\n", sc);
}
