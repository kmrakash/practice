#include<iostream>
using namespace std;
int arr[1001][1001];



int main() {
	int n;
	cin >> n;
	
	// Enter Array Elements
	for(int row=0; row<n; row++) {
		for(int col=0; col<n; col++) {
			cin >> arr[row][col];
			}
		}
		
	for(int col=n-1; col>=0; col--) {
		for(int row=0; row<n; row++) {
			cout << arr[row][col] << " ";
			}
			cout << endl;
		}
		
		return 0;
	
	}
