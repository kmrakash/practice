#include<bits/stdc++.h>
using namespace std;

int main() {
		int n,m,k,strength;
		cin >> n >> m >> k >> strength;
		char s[n][m];
		for(int row=0; row<n; row++){
				for(int col=0; col<n; col++){
						cin >> s[row][col]; 
				}
		}
		bool success = true;
		for(int row=0; row<n; row++){
			for(int col=0; col<m; col++){
					char ch = s[row][col];
					
					if(strength<k) {
							success = false;
							break;
						}
					if(ch == '.') strength -= 2;
					else if(ch == '*') strength += 5;
					else break;
					
					if(col != m-1) strength--;
			}
		}
			
		success ? cout << "YES" << "\n" : cout << "NO" << "\n";
		 cout << strength << "\n";
		
		return 0;
		
}
