#include <stdio.h>
#define N_MAX 11

int main(void)
{
  int n, sum = 0;

  for (n = 1; n <= N_MAX; n++)
    sum += n;
  printf("the sum 1+..+%i equals to %i\n", N_MAX, sum);

  sum = 0;
  for (n = N_MAX; n >= 1; n--)
    sum += n;
  printf("the sum %i+..+1 equals to %i\n", N_MAX, sum);

  return 0;
}
