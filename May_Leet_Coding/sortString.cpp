#include<bits/stdc++.h>
using namespace std;

int main(){
	string a;
	cin >> a;
	unordered_map<char, int> mp;
	for(int i=0; i<a.length(); i++){
		mp[a[i]]++;
	}

	vector<pair<char, int>> vect_mp(mp.begin(), mp.end());

	sort(vect_mp.begin(), vect_mp.end(), 
		[](pair<char, int> const& a, pair<char, int> const& b ){
			return a.second > b.second;
		}
		);

	string ans = "";
	for(auto p : vect_mp){
		for(int i=0; i<p.second; i++){
			ans += p.first;
		}
	}

	cout << ans << endl;


	return 0;
}