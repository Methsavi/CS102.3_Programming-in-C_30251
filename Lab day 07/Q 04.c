##include<stdio.h>
int main()
{
    char a;
    printf("Enter A Chracter - ");
    scanf("%c",&a);
    switch(a)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':printf("\n%c Is A Vowel\n",a);break;
    default:printf("\n%c Is Not A Vowell\n",a);break;
    }
}
