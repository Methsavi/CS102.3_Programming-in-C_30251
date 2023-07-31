#include <stdio.h>
int main(void) {
  int a,b;
  printf("Enter A Number - ");
  scanf("%d",&a);
  do{
  if(a/10==0){printf("%d",a%10);break;}
  else {printf("%d",a%10);a=a/10;}}
  while(a%10>=0);
  return 0;
}
