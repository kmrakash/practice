#include<stdio.h>
#include"akash.h"
void main()
{
    int p , a , b , c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    p = add(&a , &b);
    printf("%d\n",p);
    c= reverse(b);
    printf("%d\n",c);

}