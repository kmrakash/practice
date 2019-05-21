#include<stdio.h>

int Swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y =temp;
    return 0;
}

int partition(int *arr, int low, int high){

    int pivot = arr[high], i, j;

    i = (low-1);

    for(j=low; j<= high-1; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            Swap(&arr[i], &arr[j]);
        }
    }

    Swap(&arr[i+1],&arr[j]);
    return(i+1);
}

int QuickSort(int *arr, int low, int high){
        int pi;
    if(low < high){
        pi=partition(arr, low, high);

        QuickSort(arr, low, pi-1);
        QuickSort(arr, pi+1, high);

    }
}

void main(){
    int arr[10];
    printf("Enter Ten Elements: ");
    for(int i=0; i<10; i++)
    scanf("%d",arr+i);

    QuickSort(arr,0,9);

    for(int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    

}