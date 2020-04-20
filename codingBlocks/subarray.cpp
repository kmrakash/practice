#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
ll a[100001] , freq[100005];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		memset(freq, 0, sizeof(freq));
		
		freq[0]=1;
		
		ll csum = 0;
		for(int i=0; i<n; i++){
			cin >> a[i];
			csum += a[i];
			csum %= n;
			// for negative numbers
			csum = (csum+n)%n;
			freq[csum]++;
		}
		
		ll ans=0;
		for(int i=0; i<n; i++) {
				ll m = freq[i];
				ans += (m*(m-1))/2;
		}
		
		cout << ans << "\n";
	}
	 
	 
	
	return 0;
	}
