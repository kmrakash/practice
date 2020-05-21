/*	Find starting index of All Anagrams.
 * 
 * */

// Not optimised

#include<iostream>
#include<string>
using namespace std;

int ind[100];

int findSum(string x){
		int ans = 0;
		for(int i=0; i<x.length(); i++){
				ans += (int)x[i];
		}
		
		return ans;
}

void finAnagrams(string s, string p){
	int len_p = p.length();
	int len_s = s.length();
	
	int sumP = findSum(p);
	cout << "P sum: " << sumP << "\n";
	int j=0;
	for(int i=0; i<=len_s-len_p ; i++){
			string sub = s.substr(i, len_p);
			int sumS = findSum(sub);
			cout << "Substring is " << sub << "\n" << "It's sum is " << sumS << "\n";
			if(sumS==sumP) {
				ind[j++] = i;
			}
	}
	cout << j << "\n";
	for(int i=0; i<j; i++){
			cout << ind[i] << " ";
	}
	
}

int main(){
	string s , p;
	getline(cin, s);
	getline(cin , p);
	
	finAnagrams(s, p);
	
	//~ cout << "You Enter " << s << " " << p << "\n";
		return 0;
}
