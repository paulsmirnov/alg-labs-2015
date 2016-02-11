#include <stdio.h>

int main(void)
{
  int x;

  printf("Enter any number: ");
  scanf("%i", &x);

  if (x != 42)
  {
    printf("%i is ", x);
    if (x < 0)
      printf("less than zero\n");
    else if (x > 0)
      printf("greater than zero\n");
    else
      printf("equal to zero\n");
  }
  else
    printf("Are you kidding?\n");

  return 0;
}
