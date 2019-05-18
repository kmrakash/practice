#include<stdio.h>
void main()
{
    int num;
    scanf("%d",&num);
    printf("%d\n",num>>1);
    printf("%d\n",(num>>1)<<1); /* shifting left first loses 1 from bitwise */
    if((num>>1)<<1==num)
    printf("Even");
    else
    printf("Odd");
}