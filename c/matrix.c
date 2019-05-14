#include<stdio.h>



void main()
{

    
    int A[3][2], B[2][3], C[3][3] ;
    printf("Enter Elements for Matrix 1: \n");
    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 2; col++)
        scanf("%d",&A[row][col]);
    }

    printf("Enter Elements of Matrix 2: \n");
     for(int row = 0; row < 2; row++)
    {
        for(int col = 0; col < 3; col++)
        scanf("%d",&B[row][col]);
    
    }
    int sum=0, l;

    printf("Multiplications\n");

    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            for(int k = 0; k < 2; k++)
            sum = sum + A[i][k]*B[k][j];
        
            
            C[i][j] = sum;
            
            sum = 0;
        }
        
        
    }
    
    for ( int row = 0; row < 3; row++)
    {
        for( int col = 0; col < 3; col++ )
        printf("%d ",C[row][col]);
        printf("\n");
    }
   
}