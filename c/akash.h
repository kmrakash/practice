int add(int *a, int *b)
{
    int sum;
    sum = *a + *b;
    return sum;
}

void swap(int *a , int *b)
{
    int test;
    test = *a ;
    *a = *b;
    *b = test;
}

int reverse( int a)
{
    int rem , rev = 0;
    while(a!=0)
    {
        rem = a%10 ;
        rev = rev*10 + rem ;
        a = a/10 ;
    }
    return rev;
}
 int factorial(int a)
 {
     int p =1 , i;
     for(i=1;i<=a;i++)
        p = p * i;
     return p ;  
 }
