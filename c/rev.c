#include<stdio.h>
 int Reverse(int num)
 {
     int rev=0, rem;
     while(num != 0)
     {
         rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
     }
     return rev;
 }

 

 void main()
 {
    for (int m = 10; m < 1000; m++)
    {
        int rev = Reverse(m);
        int sqr = m*m, rev_sqr = rev*rev;
        int temp = Reverse(sqr);
        if(rev_sqr == temp)
        {
            printf("Number = %d, Square = %d || Reverse number = %d, REversed Square = %d\n",m,m*m,rev,rev*rev);
        }
    }
 }