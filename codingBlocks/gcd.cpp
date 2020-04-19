#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll x, ll y) {
	ll m = min(x,y);
	if(x%m==0 && y%m==0) return m;
	else {
			x = abs(x-y);
			gcd(m,x);
	}
	
}

int main() {
		ll a, b;
		cin>>a>>b;
		ll result = gcd(a,b);
		cout << result << "\n";
		return 0;
}
