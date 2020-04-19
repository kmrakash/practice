//~ counting number of trailing zero in factorial of n is simply count number of 5 comes upto that number
//~ example 5! = 120 , no. of zero = 1 , no. of 5 = 1;
		//~ 11! = ? , no. of trailing zero = 2 , no . of 5 = 2, in case of 5 and 10


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
	ll n;
	cin >> n;
	ll count = 0;
	for(int i=5; i<=n; i*=5) {
		count += (n/i);
		}
	
	cout << count << "\n";
	
	return 0;
}
