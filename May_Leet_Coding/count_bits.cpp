
/*
	Right Shift of any number by 1 divides the number by 2;
	example: 4 >> 1 bits of 4 = 100
				after Right shift = 10
					which is 2;
			hence no. 1 in  bits of any number is always equal to its half;
			in case of odd number we lose a 1 bit after shift so we add 1 to odd numbers;	
	
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int num;
	cin >> num;

	int DP[num];
	DP[0] = 0;
	DP[1] = 1;
	for(int i=2; i<=num; i++){
		DP[i] = DP[i>>1] + i%2;
	}

	for(int i=0; i<=num; i++){
		cout << DP[i] << " ";
	}
	

	return 0;
}