#include<stdio.h>
int main()
{
    int a=0,b=1,c,d;
    printf("%d %d ",a,b);
    for(c=2;c<=9;c++){
        d=a+b;
        printf("%d ",d);
        a=b;
        b=d;
    }
}
