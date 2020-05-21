//~ Problem: You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once. Find this single element that appears only once.

/** 
 * if Every element is even number of times and only one element is odd number of times we use Xor .
 * time complexity = O(n)
 * space complexity = O(1)
 * **/

#include<iostream>
using namespace std;
int a[100];
int main() {
		int n;
		cin >> n;
		for(int i=0; i<n; i++){
				cin >> a[i];
		}
		
		int res = 0;
		for(int i=0; i<n; i++){
				res = res^a[i];
		}
		cout << res << "\n";
		return 0;
}
