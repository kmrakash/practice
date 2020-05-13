#include<iostream>
using namespace std;

int main(){
	
	int n, m;
	cin >> n;
	int a[1000], b[1000];
	
	for(int i=0; i<n; i++){
			cin >> a[i];
	}
	cin >> m;
	for(int i=0; i<m; i++){
			cin >> b[i];
	}
	int sum[1000];
	int i = max(n,m)-1, j, k;
	int carry = 0;
	for(i, j=n-1, k=m-1; i>=0; i--, j--, k--){
		if(j<0){
				if(carry) {
					sum[i] = b[k] + carry;
					carry = sum[i]>9 ? 1 : 0;
					sum[i] %= 10;
					}
				else sum[i] = b[k];
		}
		else if(k<0){
				if(carry) {
					sum[i] = a[j] + carry;
					carry = sum[i]>9 ? 1 : 0;
					sum[i] %= 10;
					}
				else sum[i] = a[j];
		}
		else {
			
			sum[i] = a[j] + b[k] + carry;
			carry = sum[i]>9 ? 1 : 0;
			sum[i] %= 10;
			
			
		}
	}
	
	for(int i=0; i<max(n,m); i++){
			cout << sum[i] << ", ";
	}
	cout << "END"<< endl;
		return 0;
}
