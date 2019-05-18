#include<stdio.h>

int Sum_of_Digit( int N)
{
    int sum = 0, rem;
    if(N/10 == 0)
    {
        printf("Final Digit is %d\n",N);
        return 0;
    }
    else
    {
        int New_number = N;
        while(New_number != 0)
        {
            rem = New_number%10;
            sum = sum + rem;
            New_number = New_number/10;
        }
        printf("Sum of Number (%d) = %d\n", N, sum);
        return (Sum_of_Digit(sum));
    }
}
void main()
{
    int num;
    printf("Enter Any Number: ");
    scanf("%d",&num);
    Sum_of_Digit(num);
}