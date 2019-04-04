#include<iostream>
using namespace std;

int HCF(int x , int y)
{
    int temp;
    if(x<y)
    {
        temp = x;
        x = y;
        y = temp;
    }
    if(x == y)
    return x;
    else
    return HCF(x=x-y,y);
}

int  main()
{
    int a , b , gcd;
    cout << "Enter Two NUmbers: ";
    cin >> a >> b;
    gcd = HCF(a,b);
    cout << "HCF = " << gcd;

    return 0;
    
}