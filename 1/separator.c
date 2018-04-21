#include<stdio.h>

//Exercise 1-12 

int main()
{
        int c;
        int inword;
        while ((c = getchar()) != EOF) {
                if( c==' ' || c=='\n' || c=='\t' ) {
                        if (inword){
                                putchar('\n');
                        }
                        inword = 0;
                }
                else {
                        putchar(c);
                        inword = 1;
                }
        }
}
