#include<stdio.h>

int gcd(int a , int b)
{
    int temp;
    if(a<b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a == b)
    return a;
    else
    return gcd(a=a-b,b);
    
}

void main()
{
    int x , y;
    printf("Enter any two numbers: ");
    scanf("%d%d",&x,&y);
    int Gcd;
    Gcd = gcd(x,y);
    printf("HCF = %d",Gcd);
}