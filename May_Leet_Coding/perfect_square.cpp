//~ Problem statement: Tell whether a input number is a Perfect Square or not without using library function


#include<iostream>

using namespace std;

bool isPerfectSquare(int n){
		int u = n%10;
		if(u == 2 || u == 3 || u == 7 || u == 8) return false;
		
		for(int i=1; i*i<=n ; i++){
			
				if(n%i==0 and n/i == i) return true;
		}
		
		return false;
}

int main() {
	
		int n; cin >> n;
		
		isPerfectSquare(n) ? cout << "True" : cout << "False";
		return 0;
}
