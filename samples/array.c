#include <stdio.h>
#define MAX_SIZE  100

int ReadArray(int a[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    if (!scanf("%i", &a[i]) || a[i] == 0)
      break;
  return i;
}

void PrintArray(int a[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    printf(" %i", a[i]);
}

double FindAverage(int a[], int n)
{
  int i;
  double sum = 0.0;
  for (i = 0; i < n; i++)
    sum += a[i];
  return sum / n;
}

int main(void)
{
  int size, marks[MAX_SIZE];

  printf("Enter your class marks (0 to STOP): ");
  size = ReadArray(marks, MAX_SIZE);

  printf("Average of [");
  PrintArray(marks, size);
  printf(" ] is %.2lf\n", FindAverage(marks, size));

  return 0;
}
