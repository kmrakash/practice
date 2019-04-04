#include<stdio.h>
#include<math.h>
void main()
{
    int arm=0,test,num,rem,digit = 0;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&num);
    test = num;
    while(test!=0)
    {
        test = test/10;
        digit = digit + 1;
    }
    test = num;
    while(test!=0)
    {
        rem=test%10;
        arm = arm + pow(rem , digit);
        test= test/10;
    }
    if(num == arm)
        printf("Armstrong number");
    else
        printf("Not An Armstrong number");
}