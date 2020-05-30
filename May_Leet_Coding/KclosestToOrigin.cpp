#include<bits/stdc++.h>
using namespace std;
// vector<vector<int>>
struct ComparatorPoints
{	
	bool operator()(const vector<int> a , const vector<int> b){
		return (a[0]*a[0] + a[1]*a[1]) < (b[0]*b[0] + b[1]*b[1]);
	}
	
};

void kClosest(vector<vector<int>>& points, int K) {
	sort(points.begin(), points.end(), ComparatorPoints());
	vector<vector<int>> ans ;
	for(int i=0; i<K; i++){
		ans.push_back(points[i]);
	}

	for(auto x: ans){
		cout << x[0] << " " << x[1] << 	endl;
	}


}

int main(){
	// v = [[1, 2], [-2, 3], [4, 5], [3, 4]];
	vector<vector<int>> v{{1, 2},
							{-2, 3},
							{4, 5},
							{3, 4}	};
	kClosest(v, 3);
	return 0;
}