#include<stdio.h>
#include"akash.h"
void main()
{
    int i , sp , j , co_eff , n , r , rows;
    printf("enter no. of rows: ");
    scanf("%d",&rows);
    for(i = 1; i <= rows;  i++)
    {
        for(sp = 1; sp <= rows - i; sp++)
            printf(" ");
        for(j=1;j<=i;j++)
        {
            if(j == 1|| j - i == 0)
            co_eff = 1;
            else
            {
                n=i-1;
                r = j-1;
                co_eff = factorial(n)/(factorial(r)* factorial(n-r));
            }
            printf("%d ",co_eff);
        }
        printf("\n");
    }
}