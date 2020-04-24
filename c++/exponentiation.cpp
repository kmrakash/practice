#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
lli mod = 1e9+7;

lli power(lli x, lli y){
		
		lli res=1;
		x %= mod;
		if(x==0) return 0;
		
		while(y){
			
				if(y & 1) res = ((res*x)%mod+mod) % mod;
				
				y = y>>1;
				x = ((x*x)%mod+mod) % mod;
			
			}
	return res%mod;
}

int main() {
		lli base , exponent;
		cin >> base >> exponent;
		
		lli result = power(base,exponent);
		cout << result << endl;
		return 0;
}
