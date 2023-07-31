#include<stdio.h>
int main()
{
    int a;
    float b,c;
    printf("Menu:\n1. Circumference Of A Circle\n2. Area Of A Circle\n3.  Volume Of A Sphere\n\n");
    printf("Enter The Option Number Of The Calculation That You Want To Do - ");
    scanf("%d",&a);
    switch(a)
    {
    case 1:printf("Enter The Radius Of The Circle - ");scanf("%f",&b);printf("\n%f\n",2*3.14*b);break;
    case 2:printf("Enter The Radius Of The Circle- ");scanf("%f",&b);printf("\n%f\n",3.14*b*b);break;
    case 3:printf("Enter The Radius Of The Sphere- ");scanf("%f",&b);printf("\n%f\n",(4*3.14*b*b*b)/3);break;
    default:printf("\nYou Have Entered An Invalid Option Number\n");break;
    }
}
