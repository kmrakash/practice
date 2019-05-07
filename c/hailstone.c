#include<stdio.h>

int hailstone(int num)
{
    if(num == 1)
    return 0;

   else if(num%2 == 0)
   {
       printf(" %d",num/2);
       return hailstone(num/2);
   }

   else
   {
       printf(" %d",(3*num)+1);
       return hailstone((3*num)+1);
   }
   
   
    
}

void main()
{
    int num;
    printf("Enter ANy number: ");
    scanf("%d",&num);
    hailstone(num);

}