#include<stdio.h>
int main()
{
    int h;
    printf("Enter The Size For The Array 1 And Array 2 (Array 1 And Array 2 Both Should Have Equal Size) - ");
    scanf("%d",&h);
    int a[h],b[h],c,d,e,f[h],g[h],k;
    printf("\nArray 1\n");
    for(c=0;c<h;c++){
        printf("Enter Value %d - ",c+1);
        scanf("%d",&a[c]);
    }
    printf("\nArray 2\n");
    for(c=0;c<h;c++){
        printf("Enter Value %d - ",c+1);
        scanf("%d",&b[c]);
    }
    d=a[0];
    e=b[0];
    for(c=1;c<h;c++){
        d=d+a[c];
        e=e+b[c];

    }
    printf("\nScaler Sum Of Array 1 - %d\n",d);
    printf("Scaler Sum Of Array 2 - %d\n",e);
    printf("Vector Sum Of Array 1 And Array 2 - ");
    for(c=0;c<h;c++){
        f[c]=a[c]+b[c];
        printf("%d ",f[c]);
    }
    printf("\nVector Product Of Array 1 And Array 2 - ");
    for(c=0;c<h;c++){
        g[c]=a[c]*b[c];
        printf("%d ",g[c]);
    }
    k=g[0];
    for(c=1;c<h;c++){
            k=k+g[c];
    }
    printf("\nScaler Product Of Array 1 And Array 2 - %d\n",k);
}
