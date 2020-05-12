#include<iostream>
using namespace std;

int a[100];
int main() {
	
	int n;
	cin >> n;
	for(int i=0; i< n; i++){
			cin >> a[i];
	}
	int res=0;
	for(int i=0; i<n; i++){
			res = res^a[i];
			
	}
	cout << res <<  "\n";
		return 0;
}
