#include<stdio.h>
#include"akash.h"
void main()
{
    int a ;
    printf("Enter any number: ");
    scanf("%d",&a);
    int rev;
    rev = reverse(a);
    if(rev == a)
        printf("Pllindrome");
    else
        printf("Not a pallindrome");
        
}