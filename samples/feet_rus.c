#include <stdio.h>
#include <locale.h>

#define FEET_LENGTH 30.48
#define INCH_LENGTH  2.54

int main(void)
{
  int height, feet;
  double leftover, inches;

  // установить нужную кодировку для русского языка
  setlocale(LC_CTYPE, "Russian");

  // прочитать входные данные
  printf("Каков ваш рост в сантиметрах? ");
  scanf("%i", &height);

  // произвести вычисления
  feet = (int)(height / FEET_LENGTH);
  leftover = height - feet * FEET_LENGTH;
  inches = leftover / INCH_LENGTH;

  // вывести результат
  printf("Ваш рост - %i футов %.1lf дюйма\n", feet, inches);

  return 0;
}
