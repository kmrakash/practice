#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
		ios::sync_with_stdio(0);
		cin.tie(0);
	
		int t;
		cin >> t;
		while(t--) {
				ll n, q;
				cin >> n >> q;
				
				
				ll a,b,c=0;
				ll ans = 0;
				for(ll i=0; i<q; i++) {
					cin >> a >> b;
					ans += abs(a-c);
					ans += abs(b-a);
					c=b;
					
					}
					cout << ans << "\n";
		}
		return 0;
}
