#include <stdio.h>

int main(void)
{
  int i;

  /* A complex way to do it */
  for (i = 1; i < 1000; i++)
  {
    if (i >= 100)
      break;

    if (i % 13 != 0)
      continue;

    printf("%i ", i);
  }
  printf("\n");

  /* Another way */
  for (i = 1; 13 * i < 100; i++)
    printf("%i ", 13 * i);
  printf("\n");

  return 0;
}
