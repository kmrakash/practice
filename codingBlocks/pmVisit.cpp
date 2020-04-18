/* Method 2 , Idea of Pre-Computing */

#include<bits/stdc++.h>
using namespace std;

long long DP[1000001];

bool isPrime(int x) {
 for(int i=2; i<=sqrt(x); i++) {
	 if(x%i==0) return false;
	 }
	 return true;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	DP[0] = 0;
	DP[1] = 0;
	
	for(int i=2; i<=1000000; i++) {
		if(isPrime(i)) DP[i] = DP[i-1] + 1;
		else DP[i] = DP[i-1];
		}
		
		
		int t;
		cin >> t;
		while(t--) {
			int a, b;
			cin >> a >> b;
			cout << DP[b]-DP[a-1] << "\n";
			}
	return 0;
	
	}






/*
	Method 1 , this will show TLE for large Number of Queries or Test cases
	 
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
	if(x<2) return false;
	for(int i=2; i<= sqrt(x); i++) {
		if(x%i==0) return false;
		}
	return true;
	}

int main() {
		ios::sync_with_stdio(0);
		cin.tie(0);
	
		int t;
		cin >> t;
		while(t--) {
				int a , b;
				cin >> a >> b;
				
				int count = 0;
				if(a <=2 && b > 2) count++;
				if(a%2==0) a++;
				for(int i = a; i <= b; i += 2) {
						if(isPrime(i)) {
							
							count++;
							}
					
				} 
				cout << count << "\n";
				
		}
	
	return 0;
}
*/
