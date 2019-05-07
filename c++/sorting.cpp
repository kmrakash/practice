#include<iostream>
using namespace std;

int main()
{
    int a[10];
    cout<< "Enter Elements in Array";
    for(int i=0; i<10; i++)
    {
        cin >> a[i];
    }

   cout << "Linear Sorting";

   for( int i = 0; i < 10 ; i++)
   {
       if(a[i] > a[i + 1])
       
       {
           int min = a[i];
           for(int j = i; j<9 ; j++ )
           {
               a[j] = a[j+1];
           }
           a[9] = min;
       }
   }

   for(int i=0;i<10;i++)
   {
       cout << a[i] << " ";
   }

   return 0;
}