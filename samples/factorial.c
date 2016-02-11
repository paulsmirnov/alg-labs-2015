#include <stdio.h>

int factorial(int n)
{
  int result;

  if (n < 0 || n > 12)
    return 0;
  else if (n == 0)
    return 1;

  result = n;
  while (--n > 1)
    result *= n;
  return result;
}

int main(void)
{
  int x = 5;
  printf("%i! = %i\n", x, factorial(x));
  return 0;
}
