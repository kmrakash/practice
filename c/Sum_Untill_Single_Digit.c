#include<stdio.h>

int Add_Digit(int N)
{
    int Sum = 0, rem ;
    if(N/10 == 0)
    {
        printf("Final Digit Is %d\n",N);
        return 0;
    }

    else
    {
        int New_Number = N;
        while(New_Number != 0)
        {
            rem = New_Number%10;
            Sum = Sum + rem;
            New_Number = New_Number/10;
        }

        printf("Sum of %d = %d\n",N,Sum);
        return Add_Digit(N/10);
    }
}

void main()
{
    int Num;
    printf("Enter Any Number : ");
    scanf("%d",&Num);
    Add_Digit(Num);
}