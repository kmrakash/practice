#include<stdio.h>
#include<stdlib.h>

int BinarySearch(int *p, int left,int right, int x)

{
    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if(p[mid] == x)
        return 1;

        else if(p[mid]<x)
        left = mid + 1;

        else
        right = mid -1;     
    }

    return -1;
}

void main()
{
    int num, n;
    int *list;
    printf("Enter Size OF the list: ");
    scanf("%d",&n);
    list = (int*)malloc(n*sizeof(int));
    printf("\nEnter The list: ");
    for(int i =0 ; i<n; i++)
    {
        scanf("%d", list+i);
    }
    printf("\n Enter Element to be Searched: ");
    scanf("%d",&num);
    int result = BinarySearch(list,0,n-1,num);
    (result == 1) ? printf("ELement Searched"): printf("Element is not present in the list");
}