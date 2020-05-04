#include<bits/stdc++.h>
using namespace std;

int a[20];

int main() {
		ios::sync_with_stdio(0);
		cin.tie(0);
		
		int t; cin >> t;
		while(t--){
			int n;
			cin >> n;
			for(int i=0; i<n; i++) cin >> a[i];
			
			int count = 1;
			int minCount = 10000;
			int maxCount = 0;
			
			for(int i=1; i<n; i++){
					if(a[i]-a[i-1]<=2) count++;
					else{
						minCount = min(minCount, count);
						maxCount = max(maxCount, count);
						if(i != n-1)count = 1;
					}
					
			}
			minCount = min(minCount, count);
			maxCount = max(maxCount, count);
			
			cout << minCount << " " << maxCount << "\n";
				
		}
	return 0;
}
