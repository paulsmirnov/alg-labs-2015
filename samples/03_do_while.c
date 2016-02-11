#include <stdio.h>

int main(void)
{
  int n;
  int sum = 0;

  do
  {
    printf("Enter a number (0 to stop): ");
    scanf("%i", &n);
    sum += n;
  } while (n != 0);

  printf("The sum equals to %i\n", sum);

  return 0;
}
