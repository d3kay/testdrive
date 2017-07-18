#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,r,g,q,i,p,v;
    int e=0;
    printf("enter the number of rows.");
    scanf("%d",&v);
    for(n=0;n<=v;n++)
    {
        e=e+n;
        g=e;
        for(i=q+1;i<=g;i++)
        {
            printf("%d ",i);
        };
        printf("\n",e);
        q=e;
    };
    return 0;
}
