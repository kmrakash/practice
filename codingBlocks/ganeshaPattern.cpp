#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter Value of N(Must be Odd): ";
	cin >> n;
	while((n%2==0)){
		cout << "Error: Enter valid one:";
		cin >> n;
		}
	int i,j,k,l,m;
	for(int i=1; i<=n; i++) {
		if(i==1) {
			for(int j=1; j<=n; j++) {
				if(j>1 && j<= n/2) cout << " ";
				else cout << "*";
				}
			}
		else if(i==n) {
			for(int k=1; k<=n; k++) {
				if(k>(n/2)+1 && k<n) cout << " ";
				else cout << "*";
				}
			}
		else if(i==(n/2)+1) {
			for(int l=1; l<=n; l++) {
				cout << "*";
				}
			}
		else if(i>(n/2)+1) {
			for(int j=1;j<=n; j++) {
				if(j==(n/2)+1 || j==n) cout << "*";
				else cout << " ";
				}
			}
		else {
			cout << "*";
			for(int m=1; m < n/2; m++) {
				cout << " ";
				}
			cout << "*";
			}
		cout << endl;
		}	
	
	return 0;
	}
