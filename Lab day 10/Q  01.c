#include<stdio.h>
int main()
{
    int a[10],b,c=0,min,max;
    for(b=0;b<=9;b++){
        printf("Enter Value %d - ",b+1);
        scanf("%d",&a[b]);
        c=c+a[b];
    }
    min=a[0];
    max=a[0];
    for(b=1;b<=9;b++){
        if(a[b]>max){max=a[b];}
        if(a[b]<min){min=a[b];}
    }
    printf("\nMinimum Value - %d\n",min);
    printf("Maximum Value - %d\n",max);
    printf("Average Value - %.2f\n\n",(float)c/10.0);
    printf("Reverse Order Of Values\n");
    for(b=9;b>=0;b--){
        printf("Value %d - %d\n",b+1,a[b]);
    }
}
