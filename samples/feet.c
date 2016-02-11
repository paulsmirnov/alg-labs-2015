#include <stdio.h>
#define FEET_LENGTH 30.48

int main(void)
{
  int height;

  /* read input data */
  printf("What is your height in cm? ");
  scanf("%i", &height);

  /* write result */
  printf("Your height is %lf feet\n", height / FEET_LENGTH);

  return 0;
}
