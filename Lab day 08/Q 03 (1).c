#include<stdio.h>
int main()
{
    int a,b=1;
    printf("Enter A Number - ");
    scanf("%d",&a);
    if(a==0 || a==1){printf("1");}
    else {for(int i=2;i<=a;i++)
    {
        b=b*i;

    }
    printf("%d",b);}
}
