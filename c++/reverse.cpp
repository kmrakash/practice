#include<iostream>
using namespace std;

int main() {
		int t; cin>> t;
		while(t--){
				int n;
				cin >> n;
				int rev=0;
				int d;
				while(n!=0){
						d = n%10;
					
						rev *= 10;
						rev += d;
						
						n /= 10;
				}
				cout << rev << "\n";
		}
		return 0;
}
