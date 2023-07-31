#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Menu:\n1. Addition (+)\n2. Subtraction(-)\n3. Multiplication(*)\n4. Division(/)\n\n");
    printf("Enter 2 Numbers - ");
    scanf("%d %d",&a,&b);
    printf("Enter The Option Number Of The Operation You Want - ");
    scanf("%d",&c);
    switch(c)
    {
    case 1:printf("\n%d + %d = %d\n",a,b,a+b);break;
    case 2:printf("\n%d - %d = %d\n",a,b,a-b);break;
    case 3:printf("\n%d * %d = %d\n",a,b,a*b);break;
    case 4:printf("\n%d / %d = %d\n",a,b,a/b);break;
    default:printf("\nYou Have Entered An Invalid Option Number\n");break;
    }
}
