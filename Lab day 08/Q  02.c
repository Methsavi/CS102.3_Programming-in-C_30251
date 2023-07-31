#include<stdio.h>
int main()
{
    int i=1,a,b=0;
    float c;
    while(i<=10)
    {
        printf("Enter The Marks Of Subject %d - ",i);
        scanf("%d",&a);
        i++;
        b=b+a;
    }
    c=(float)b/10.0;
    printf("\n");
    if((int)c<50)
        printf("Fail\n");
    else
        printf("Pass\n");
}

