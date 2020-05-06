#include<bits/stdc++.h>
using namespace std;

void majorityElement(vector<int>& v){
		unordered_map<int, int> mp;
		
		for(int i=0; i<v.size(); i++){
			mp[v[i]]++;
			
			}
		for (auto x : mp) {
				if(x.second > v.size()/2){
						cout << x.first << "\n";
						return;
					}
		}
        
	
}

int main(){
		vector<int> array;
		int n;
		cin >> n;
		int temp;
		for(int i=0; i<n; i++){
				cin >> temp;
				array.push_back(temp);
		}
		
		//~ cout << 
		majorityElement(array);
		return 0;
}

// alternative and fast method 
   //~ int ans = 0, count = 0;
        //~ for(auto& num : nums){
            //~ if(count == 0){
                //~ ans = num; count = 1;
            //~ }else{
                //~ count += (ans == num) ? 1 : -1;
            //~ }
        //~ }
        //~ //You may assume that the array is non-empty and the majority element always exist in the array.
        //~ return ans;
    
