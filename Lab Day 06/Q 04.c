#include<stdio.h>
int main()
{
  const float r,d,c, a, p = 3.14159;
  printf("Enter The Radius Of The Circle - ");
  scanf("%f", &r);
  printf("The Diameter Of The Circle Is %f\n", 2.0 * r);
  printf("The Circumference Of The Circle Is %f\n", 2.0 * p * r);
  printf("The Area Of The Circle Is %f\n", p * r * r);
}
