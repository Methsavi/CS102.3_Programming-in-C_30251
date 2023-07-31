#include<stdio.h>
int main()
{
int a, b = 0, c = 1, d=0,e=0,f,g,h;
printf("Enter A Number - ");
scanf("%d", &a);
f=a;g=a;
if (a == 0) {b = 0;}
else {while (f / 10 > 0) {b++;f = f / 10;}}
h=b+1;
while (g > 0) {d=g%10;while(h>=1){c=d*c;h--;}g = g / 10;e=e+c;h=b+1;c=1;}
if(e==a){printf("%d Is A Armstrong Number",a);}
else {printf("%d Is Not A Armstrong Number",a);}
}

