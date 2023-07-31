#include<stdio.h>
int main()
{
    int a;
    printf("Enter An Integer - ");
    scanf("%d",&a);
    switch(a%2)
    {
    case 0:printf("It Is An Even Number");break;
    default:printf("It Is A Odd Number");break;
    }
}
