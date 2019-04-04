#include<stdio.h>
int main()
{
	//code
	int t;
	for(int i = 1; i <= t; i++)
	{
	    int size;
	    scanf("%d",&size);
	    int arr[size];
	    for (int j = 0 ; j < size ; j++)
	    scanf("%d",arr + j);
	    for ( int k = 0 ; k < size ; k++)
	    {
	        if (arr[k] == k)
	        printf("%d ",arr[k]);
	        else
	        printf("Not found");
	    }
	}
	return 0;
}