#include <stdio.h>

int main(void)
{
  int quit = 0, key;

  do
  {
    printf("Do you want to quit? [y/n] ");
    key = getchar();
    switch (key)
    {
    case 'y':
    case 'Y':
      printf("\nOk, leaving...\n");
      quit = 1;
      break;
    case 'n':
    case 'N':
      printf("\nWhy not? I ask you again.\n");
      break;
    default:
      printf("\nHey! That's not an answer!\n");
      break;
    }

    // skip input until the end of the line
    while (key != '\n' && key != EOF)
      key = getchar();

  } while (!quit);

  return 0;
}
