#include<stdio.h>
int main()
{
  int m,n;
  printf("Enter The First Integer - ");
  scanf("%d",&m);
  printf("\nEnter The Second Integer - ");
  scanf("%d",&n);
  if(m%n==0)
    printf("\nThe First Integer Is A Multiple Of The Second Integer\n");
  else
    printf("\nThe First Integer Is Not A Multiple Of The Second Integer\n");
}
