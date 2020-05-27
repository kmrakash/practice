#include<bits/stdc++.h>
using namespace std;

/*-----------Method 1-----------------------------------*/
// int findMaxLength(vector<int>& nums) {
//         int n = nums.size();
//         int l =0;
//         int r = 0;
//         int required = n/2;
//         int current = 0;
//         for(int i=0; i<n; i++){
//         	current = accumulate(nums.begin()-l, nums.end()-r, 0);
//         	if(current <= required) return current*2;
//         	else{
//         		if(nums[i]==1) l++;
//         		else if(nums[n-i-1]==1) r++;
//         		required = (n-(i+1))/2;
//         	}
//         }
//         return 0;
//  }


/*-------------------------Method 2----------------------------*/
int findMaxLength(vector<int>& nums){
	unordered_map<int,int> Map; // count=> index
		Map[0]=-1;
		int count=0;
		int ans=0;
		for(int i=0;i<nums.size();i++)
		{
			if(nums[i]==1)
			{
				count++;
			}
			else
			{
				count--;
			}
			if(Map.count(count))
			{
				ans=max(ans,i-Map[count]);
				cout << "c: " << count << "\n";
				cout << "count: " << Map.count(count) << "\n";
				cout << "ans: " << ans << "\n";
			}
			else
			{
				Map[count]=i;
			}
		}

		return ans;
	}


int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	int ans = findMaxLength(a);
	cout << ans << endl;

	

	return 0;
}