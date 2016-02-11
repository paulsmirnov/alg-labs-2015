#include <stdio.h>

int main(void)
{
  int a, b;
  printf("Let's solve Ax + B = 0.\nEnter A and B: ");
  scanf("%i%i", &a, &b);
  printf("\nHm... I suppose, x = %lf\n", -(double)b / (double)a);
  return 0;
}
