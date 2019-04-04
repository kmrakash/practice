#include<bits/stdc++.h>
using namespace std;

ifstream f("data.in");
ofstream g("data.out");

int A[101],X;
int maximum;
int n;
 
int main()
{
    f>>n; // size of the array
    
    for(int i=0 ; i<n ; ++i)     // input of integers in array
    {
        f>>X;
        ++A[X];
        maximum = max(maximum , X);
    }

    for(int i=0 ; i <= maximum ; ++i)
    {
        if(A[i]>0)
        {
            for(int j=0; j<A[i]; ++j)
            cout<<i<<" ";
        }
    }

   return 0;


} 