#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(k=1;k<=2*i-1;k++)
            printf("*");
        printf("\n");        
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=i;j++)
            printf(" ");
        for(k=n-1;k<=;k++)
            printf("*");
        printf("\n");        
    }
}