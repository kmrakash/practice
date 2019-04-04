#include<stdio.h>
void main()
{
    int n,rev=0,s;
    printf("Enter any number: ");
    scanf("%d",&n);
    do
    {
        s=n%10;
        rev=rev*10+s;
        n=n/10;
    } while (n>0);
    printf("Reversed number:%d ",rev);
}