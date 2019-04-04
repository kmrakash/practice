#include<stdio.h>
void main()
{
    int i,j,n,c;
    printf("Enter Range: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c = 0;
        for(j=1;j<=i;j++)
        {
            if(i%j == 0)
                c++;
        }
        if( c == 2)
        printf("%d ",i);
    }
}