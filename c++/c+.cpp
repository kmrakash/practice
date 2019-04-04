#include<iostream>
 int main()
 {
     for(int i =1 ; i <=5 ; i++)
     {
         for(int j=1; j<=5-i ; j++)
         {
             std::cout << " ";
         }
         for(int k=1 ; k <= i; k++)
         {
             std::cout << "*";
         }
         for(int x = 1 ; x <= i-1; x++)
         {
             std::cout << "*";
         }
         std::cout << "\n";
     }
     return 0;
 }