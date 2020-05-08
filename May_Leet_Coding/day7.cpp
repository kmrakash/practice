#include<bits/stdc++.h>

using namespace std;

bool check(vector<vector<int>>& p){
		if(p.size()==2) return true;
		
		for(int i=2; i<p.size()-2; i++){
				float value = 0.5*(p[i][0]*(p[i+1][1]-p[i+2][1]) + p[i+1][0]*(p[i+2][1]-p[i][1])+ p[i+2][0]*(p[i][1]-p[i+1][1]));
				cout << "for " << i << " " << value << "\n";
				if(value != 0) return false;
			
		}
		return true;
	
}

int main() {
		
		vector<vector<int>> v;
		vector<int> x;
		int a;
		int n;
		cin >> n;
		for(int i=0; i<n; i++) {
				for(int j=0; j<2; j++){
						
						cin >> a;
						x.push_back(a);
					}
					v.push_back(x);
					x.clear();
			}
		
		check(v) ? cout << "In same Line" : cout << "Not in same line";
		
		 //~ for (int i = 0; i < v.size(); i++) { 
        //~ for ( 
            //~ auto it = v[i].begin(); 
            //~ it != v[i].end(); it++) 
            //~ cout << *it << " "; 
        //~ cout << endl; 
    
		
		return 0;
	
}
