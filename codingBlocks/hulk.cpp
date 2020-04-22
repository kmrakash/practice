#include<bits/stdc++.h>
using namespace std;
typedef long ll;

ll nearestInt(ll n){
		ll p = floor(log2(n));
		return pow(2, p);
}

int main() {
	
		ios::sync_with_stdio(0);
		cin.tie(0);
		
		int t;
		cin >> t;
		while(t--){
			ll n;
			cin >> n;
			ll ans = 0;
			
			while(n){
					ll k = nearestInt(n);
					if(k==n) {
							ans++;
							break;
					}
					else{
							n=n-k;
							ans++;
					}
			}
			
			cout << ans << "\n";
		}
		
		return 0;
}
