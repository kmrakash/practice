#include<stdio.h>
void main()
{
    int p = 1, i = 0,n;
    printf("Enter The number: ");
    scanf("%d",&n);
    while(i<n)
    {
        i++;
        p = p*i;
    }
    printf("Factorial 0f %d is %d",n,p);
}