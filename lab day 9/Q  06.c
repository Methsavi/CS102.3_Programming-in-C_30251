#include<stdio.h>
int main()
{
    int a,b,c=1;
    float d=1.00;
    printf("Enter A Base - ");
    scanf("%d",&a);
     printf("Enter A Exponent - ");
    scanf("%d",&b);
    if(b>0){
    while(b!=0){
        c=c*a;
        b--;
    }
    printf("%d\n",c);
    }
    else if (b<0){
    while(b!=0){
        d=d/(float)a;
        b++;
    }
    printf("%f\n",d);
    }
    else {
        printf("1\n");
    }
}
