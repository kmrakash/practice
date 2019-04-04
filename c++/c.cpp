#include<iostream>
int main()
{
    int a , b;
    std::cout << "Enter any two number: ";
    std::cin >> a >> b;

    if(a>b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    
    for(int j =1 ; j <= a; j++)
    {
        if(a%j == 0 && b%j == 0)
        {
        std::cout << "HCF: " << j;
        }
    }
    return 0;
}