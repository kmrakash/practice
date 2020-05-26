#include<bits/stdc++.h>
using namespace std;

int uncrosed_line(vector<int>& A, vector<int>& B){
	int N = A.size();
	int M = B.size();

	int dp[N+1][M+1];

	for(int i=0; i<=N; i++){
		for(int j=0; j<=M; j++){
			if(i==0 || j==0) dp[i][j] = 0;

			else if(A[i-1]==B[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
			else{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}
	return dp[N][M];
}

int main() {
	
	int n , m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	for(int i=0; i<n; i++){
		cin >> a[i]; 
	}


	for(int i=0; i<m; i++){
		cin >> b[i]; 
	}
	int ans = uncrosed_line(a, b);
	cout << "Total Uncrossed Line is: " << ans << endl;
	
	return 0;
}