//~ Problem:- Find Closest Pair in Binary Search tree

#include<iostream>
#include<iterator>
#include<map>
#include<cstdlib>
#include<climits>


using namespace std;

typedef map<int, int> mii;
mii mp;

// Time complexity = O(log(N)) and space complexity = O(1) since not using any extra array for storing the computed value;
void Method1(int target){
		mii::iterator it;
		int closest = INT_MAX;
		int current;
		for(it=mp.begin(); it!=mp.end(); ++it){
			current = it->first;	
			if(abs(target-closest) > abs(target-current))
				closest=current;
		}
		cout << closest << "\n";
		return;
}



int main() {
		int n;
		cin >> n;
		int x;
		for(int i=0; i<n; i++){
			cin >> x;
			mp[x]++;
		}
		int closestValue;
		cin >> closestValue;
		
		Method1(closestValue);
		
	return 0;
}
