// You have given a array of integer both negative and positive included. and Target sum. find a if there exist a pair whose sum is equal to target sum.
// example [3, 4, 5, -4, 11, 1, -1] target sum = 10 and ans is [11, -1]

#include<bits/stdc++.h>
using namespace std;

int a[100001];


//Method 1 T(N) = N^2 and space O(1);
void Method1(int n,int tSum){
			for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if(a[i]+a[j]==tSum){
					cout << a[i] << ", " << a[j] << "\n";
					return;
					}
				}
			}
	cout << "No Pair Exist" << "\n";
	return;
}

//T(N) = N and O(N)
void Method2(int n, int tSum){
	unordered_map<int, int> ump;
	for(int i=0; i<n; i++){
			int y = tSum - a[i];
			if(ump[y]>0){
					cout << a[i] << ", " << y << "\n";
					return;
			}
			ump[a[i]]++;
	}
	cout << "No pair Exist" << endl;
	return;
}

//Most optimal solution
void Method3(int n, int tSum){
		sort(a, a+n);
		int left = 0;
		int right = n-1;
		
		while(left<right){
			int x = a[left]+a[right];
			if(x==tSum){
			cout << a[left] << ", " << a[right] << "\n";
			return;	
			}
			else if(x>tSum){
					right--;
			}
			else {
					left++;
			}
		}
	cout << "No pair Exist" << endl;
	return;
}

int main(){
		int n;
		cin >> n;
		for(int i=0; i<n; i++) cin >> a[i];
		int target_sum;
		cin >> target_sum;
		
		// Solution Method 1
	Method3(n, target_sum);
	
	return 0;
}
