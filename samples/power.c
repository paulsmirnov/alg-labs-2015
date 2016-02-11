#include <stdio.h>

int power(int a, int b)
{
  int result = 1;
  while (b-- > 0)
    result *= a;
  return result;
}

int main(void)
{
  int x = 11;
  printf("%i squared is %i\n", x, power(x, 2));
  return 0;
}
