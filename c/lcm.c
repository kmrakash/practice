#include<stdio.h>

void main()
{
    int n1 , n2, minMultiple;
    printf("Enter Any Two Positive Integer: ");
    scanf("%d%d",&n1,&n2);
    minMultiple = (n1>n2) ? n1 : n2;

    while(1)
    {
        if(minMultiple%n1==0 && minMultiple%n2==0)
        {
            printf("L.C.M of %d and %d is %d \n",n1,n2,minMultiple);
            break;
        }
        minMultiple++;
    }

    int hcf = (n1*n2)/minMultiple;
    printf("H.C.F of %d and %d is %d",n1,n2,hcf);
}