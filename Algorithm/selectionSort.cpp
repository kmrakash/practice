#include<iostream>
using namespace std;

int A[100];

int main(){
	
		int n;
		cin >> n;
		for(int i=0; i<n; i++) cin >> A[i];
		
		// Selection Sort
		for(int i=0; i<n-1; i++){
				int min_index = i;
				for(int j=i+1; j<n; j++){
					if(A[min_index]>A[j]) min_index=j;
				}
				swap(A[i], A[min_index]);
		}
	
		// Print Sorted Array
		for(int i=0; i<n;i++){
			cout << A[i] << " ";
		}
	
	return 0;
}
