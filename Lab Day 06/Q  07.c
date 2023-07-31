#include<stdio.h>
int main()
{
  int bsalary,syears,sallow,gsalary,msales,sbonus,aallow;
  char city[20];
  printf("Enter Your Basic Salary - ");
  scanf("%d",&bsalary);
  printf("\nEnter The Number Of Your Service Years - ");
  scanf("%d",&syears);
  printf("\nEnter The Monthly Sales Amount In Rupees - ");
  scanf("%d",&msales);
  printf("\nEnter The City You Are Working - ");
  scanf("%s",city);
  if (city[0]=='C')
    aallow=2500;
  else
    aallow=0;
  if(syears>5)
    sallow=bsalary/10;
  else
    sallow=0;
  if(msales>=50000)
    sbonus=(msales*3)/20;
  else if(msales>=25000)
    sbonus=(msales*3)/25;
  else
    sbonus=msales/10;
  gsalary=bsalary+sallow+sbonus+aallow;
  printf("\nThe Gross Salary Of A Employee Is - %d\n",gsalary);
}
