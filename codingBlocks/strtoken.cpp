#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

string extractKey(string str, int key){
	char *s = strtok((char*)str.c_str(), " ");
	while(key>1){
			s=strtok(NULL, " ");
			key--;
	}
	return (string)s; 
}

int convertInt(string s){
		int ans =0;
		int p=1;
		for(int i=s.length()-1; i>=0; i--){
				ans += ((s[i]-'0')*p);
				p *= 10;
		}
		return ans;
}

bool numericCompare(pair<string, string> s1, pair<string, string> s2){
	string key1 = s1.second;
	string key2 = s2.second;
	
	return convertInt(key1) < convertInt(key2);
}

bool lexicoCompare(pair<string, string> s1, pair<string, string> s2){
	string key1 = s1.second;
	string key2 = s2.second;
	
	return key1< key2;
}

int main(){
	
	//~ string s="10 20 30 40 50";
	//~ int key;
	//~ cin >> key;
	//~ cout << extractKey(s, key) << endl;
	string a[100];
	int n;
	cin >> n;
	cin.get();
	
	for(int i=0; i<n; i++){
			getline(cin, a[i]);
	}
	
	int key;
	string reversal, ordering;
	cin >> key>>reversal>>ordering;
	
	pair<string, string> strPair[100];
	for(int i=0; i<n; i++){
			strPair[i].first = a[i];
			strPair[i].second = extractKey(a[i], key);
	}
	
	
	//Sorting
	if(ordering == "numeric"){
			sort(strPair, strPair+n, numericCompare);
	}
	else sort(strPair, strPair+n, lexicoCompare);
	
	// check for reversal
	
	if(reversal == "true"){
			for(int i=0; i<n/2; i++){
				swap(strPair[i], strPair[n-i-1]);
			}
	}
	
	for(int i=0; i<n; i++){
			cout << strPair[i].first << "\n";
	}
	
	return 0;
}
