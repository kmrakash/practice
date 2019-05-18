#include<stdio.h>
void main()
{
    int num;
    scanf("%d",&num);
    printf("%d\n",num>>1);
    printf("%d\n",(num>>1)<<1);
    if((num>>1)<<1==num)
    printf("Even");
    else
    printf("Odd");
}