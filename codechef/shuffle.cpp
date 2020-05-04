#include<bits/stdc++.h>
using namespace std;

int a[100001];
vector<int> b;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
			int n , k;
			cin >> n >> k;
			
			for(int i=0; i<n; i++){
					cin >> a[i];
			}
			
			for(int i=0; i<k; i++){
					for(int j=i; j<n; j+=k){
							b.push_back(a[j]); 
					}
					sort(b.begin(), b.end());
					int index=0;
					for(int p=i; p<n; p+=k){
							a[p] = b[index++];
					}
					b.clear();
			}
			bool sort = true;
			// To check whether Sorted Or Not
			for(int i=1; i<n; i++){
					if(a[i-1]>a[i]){
							sort = false;
							break;
					}
			}
			sort ? cout << "yes" << "\n" : cout << "no" << "\n";
			
	}
	
	
		return 0;
}
