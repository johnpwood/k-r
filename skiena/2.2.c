#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv) {
  int n = atoi(argv[1]);
  int r = 0;
  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= i; j++)
      for(int k = 1; k <= i + 1; k++)
	r += 1;
  printf("%d    ", r);
  double x = (n*n*n + 3*n*n + 2*n)/3.0;
  printf("%f      %f\n", x, r/x);
}
