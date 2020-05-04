#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll query[100001];
ll alpha[26];
ll sum[100001];
int main(){
		ios::sync_with_stdio(0);
		cin.tie(0);
		int t;
		cin >> t;
		while(t--){
			int n , q;
			cin >> n >> q;
			string s;
			cin >> s;
			memset(alpha, 0, sizeof(alpha));
			for(int i=0; i<q; i++) cin >> query[i];
			for(int i=0; s[i]; i++){
				alpha[(int)s[i]-97]++;
				}
			
			memset(sum, 0, sizeof(sum));
			
			for(int i=0; i<q; i++){
					for(int j=0; j<26; j++){
							ll temp = alpha[j] - query[i];
							if(temp <=0) temp = 0;
							sum[i] += temp; 
					}
				
			}
			for(int i=0; i<q; i++){
					cout << sum[i] << "\n";
			}
			
		}
	return 0;
}
