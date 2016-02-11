#include <stdio.h>
#define MAX_LENGTH  100

int Length(char s[])
{
  int i = 0;
  while (s[i] != 0)
    i++;
  return i;
}

int main(void)
{
  char name[MAX_LENGTH + 1];

  printf("What is your name? ");
  gets(name);

  printf("Nice to meet you, %s! ", name);
  printf("Your name is %i characters long.\n", Length(name));
  return 0;
}
