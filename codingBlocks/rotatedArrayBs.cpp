#include<bits/stdc++.h>
using namespace std;

int Search(int a[],int n, int item){
		int s=0;
		int e = n-1;
		while(s<=e){
				int mid = (s+e)/2;
				if(a[mid]==item) return mid;
				
				else if( a[s]<=a[mid]   ){
						
						if(item >=a[s] and item <=a[mid]){
							e = mid-1;
							}
						else{
								s= mid+1;
						}
				}
				else{
						if(item <=a[e] and item >=a[mid]){
								s=mid+1;
						}
						else{
								e = mid-1;
						}
						
				}
			
		}
		return -1;
}


int main() {
		int n;
		cin >> n;
		int a[1000000];
		for(int i=0; i<n; i++){
				cin >> a[i];
		}
		int x;
		cin >> x;
		cout << Search(a,n, x) << endl;
		return 0;
}
