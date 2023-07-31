#include <stdio.h>
int main()
{
  int a, b = 0, c;
  printf("Enter A Number - ");
  scanf("%d", &a);
  c = a;
  while (a != 0) {
    b = b + a % 10;
    a = a / 10;
  }
  printf("\nThe Sum Of The Digits Of The Number %d Is %d\n", c, b);
}
