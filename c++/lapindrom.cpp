#include<iostream>
#include<string>
using namespace std;

bool checkLapindrome(string s){
		int l = s.length();
		string s1 = s.substring(0, l/2);
		string s2;
		l%2==0 ? s2=s.substring(l/2, l) : s2=s.substring(l/2+1, l);
		sort(s1.begin(), s1.end());
		sort(s2.begin(), s2.end());
		
		return s1 == s2;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
		int t;
		cin >> t;
		while(t--){
				string s;
				cin >> s;
				
				checkLapindrome(s) ? cout << "YES" << "\n" : cout << "NO" << "\n" ;
		}
		return 0;
}
