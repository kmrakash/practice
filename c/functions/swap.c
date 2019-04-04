#include<stdio.h>
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
   *y = t;
}
void main()
{
    int a = 4 , b = 6;
    swap(&a,&b);
    printf("%d , %d",a,b);
}