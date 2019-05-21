/* A programme to Print All the Armstrong Number Upto 10000 */

#include<stdio.h>
#include<math.h>

void main()
{
    int i, temp;
    for(i=1;i<=10000;i++)
    {
        temp = i;
        int count = 0;

        /* Count Number of digit */

        while(temp != 0)
        {
            temp = temp/10;
            ++count;
        }

        int armstrong = 0, rem, power;
        temp = i;
        while(temp != 0)
        {
            rem = temp%10;
            temp = temp/10;
            
            power = pow(rem,count);
           
            armstrong = armstrong + power;
            
            
        }
       
        if(armstrong == i)
        printf("%d\n",armstrong);
    }
}