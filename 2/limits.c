#include<limits.h>
#include<stdio.h>
#include<float.h>

int main(){
  int lims[50];
  
  printf("%d %d %d\n", CHAR_BIT, CHAR_MIN, CHAR_MAX);
  printf("%d", UCHAR_MAX);
  printf("\n\n%d", INT_MAX);
  printf("\n%ld\n\n", LONG_MAX);
  // printf("%d", SHRT_MAX);
  printf("%d\n", FLT_DIG);
  printf("%e\n", FLT_EPSILON);
  printf("%e\n", DBL_EPSILON);
  printf("%d\n", '0');
  printf("%d\n", '9');
}
  
