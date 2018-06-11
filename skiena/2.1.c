#include<stdio.h>

int main() {
  double s;
  int r;
  for(int n = 1; n <= 40; n++) {
    r = 0;
    for(int i = 1; i <= n-1; i++)
      for(int j = i + 1; j <= n; j++)
	for(int k = 1; k <= j; k++)
	  r += 1;
    s = (n*n*n - n)/3.0;
    printf("%d:    %d    %f    %f\n", n, r, s, r/s);
  }
}
