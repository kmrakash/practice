#include<iostream>
using namespace std;

int A[100];

int main() {
	int n;
	cin >> n;
	for(int i=0; i<n; i++) cin >> A[i];
	
	//Bubble Sort
	for(int i=0; i<n-1; i++){
			for(int j=0; j<n-i-1; j++){
					if(A[j]>A[j+1]) swap(A[j], A[j+1]);
			}
	}
	
	// Print Sorted Array
	for(int i=0; i<n; i++){
			cout << A[i] << " ";
	}
	cout << endl;
	return 0;
}
