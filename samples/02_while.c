#include <stdio.h>
#define N_MAX 11

int main(void)
{
  int n = N_MAX;
  int sum = n;

  while (--n > 0)
    sum += n;
  printf("the sum %i+..+1 equals to %i\n", N_MAX, sum);

  return 0;
}
