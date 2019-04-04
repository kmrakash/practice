#include<stdio.h>
void main()
{
    int c=0,i=1,p=0,n;
    printf("Enter The range of series: ");
    scanf("%d",&n);
    while(p<=n)
    {
        c=i;
        i=p;
        printf("%d, ",p);
        p=c+i;

    }
}