#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll m = 1e9+7;

int main() {
		ios::sync_with_stdio(0);
		cin.tie(0);
	
		int t;
		cin >> t;
		while(t--) {
			ll n , a;
			cin >> n >> a;
			ll p=1;
			ll sum = 0;
			ll q;
			for(int i=1; i<=n and a!=0; i++){
					ll exp = 2*i-1;
					q = (p*a);
					p = pow(q, exp);
					sum += (p%m);
					sum %= m;
					sum = (sum+m)%m;
					a = q%m;
			}
			cout << sum%m << "\n";
		}
		return 0;
}
