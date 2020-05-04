#include<bits/stdc++.h>
using namespace std;


bool compare(pair<int, int>a, pair<int, int>b){
		return a.second < b.second;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t; cin >> t;
	while(t--){
			int n, s;
			cin >> n >> s;
			
			pair<int, int> value[100];
			for(int i=0; i<n; i++){
					cin >> value[i].first;
			}
			
			for(int i=0; i<n; i++){
					cin >> value[i].second;
			}
			
			sort(value, value+n, compare);
			
			int max_value = 100-s;
			int ans = 0;
			
			for(int i=0; i<n and value[i].second == 0; i++){
				for(int j=n-1; j>=0 and value[j].second == 1; j--){
						if(value[i].first + value[j].first <= max_value) {
								ans = max(ans, value[i].first + value[j].first);
							}
				}
			}
			ans ? cout << "yes" << "\n" : cout << "no" << "\n";
	}
	
	return 0;
}
