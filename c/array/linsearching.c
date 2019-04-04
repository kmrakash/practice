#include<stdio.h>
void main()
{
    int arr[10],n,flag=0,i;
    for(i=0;i<10;i++)
    {
        printf("Enter any data: ");
        scanf("%d",arr + i);
    }
    printf("Enter data to be searched: ");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if(arr[i] == n)
        {
           flag = 1;
           break;
        }
    }
    if ( flag == 1)
        printf("Item Found ");
    else
        printf("Invalid Input");
              
}