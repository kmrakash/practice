#include<iostream>
#include<algorithm>
using namespace std;



const int M = 1000;
const int N = 1000;

int matrix[M][N];

int main(){
	int m, n;
	cin >> m >> n;

	for(int row=0; row<m; row++){
		for(int col=0; col<n; col++){
			cin >> matrix[row][col];
		}
	}

	int ans=0;


	for(int row=0; row<m; row++){
		for(int col=0; col<n; col++){
			
			//Take the minimum number from left , top and top left and to current ending squar.
			// skip the first column since no square matrix whose row and col are greater than 1 are present also skip whose value is zero
			if(row>0 && col>0 && matrix[row][col]>0)
			matrix[row][col] = min(matrix[row][col-1], min(matrix[row-1][col], matrix[row-1][col-1]))+1;
			cout << "For Row And COl: " << row << ", " << col << ", " << matrix[row][col]<<  "\n";
			ans += matrix[row][col];
		}
	}
	cout << ans << "\n";
	return 0;
}