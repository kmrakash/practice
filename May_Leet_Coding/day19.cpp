// Basic Implementation of OOPS
#include<iostream>
#include<vector>
using namespace std;

class StockSpanner {
    vector<int> v;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
      this->v.push_back(price);
        int count = 0;
        int rate = price;
        
        for(int i=v.size()-1; i>=0; i--){
            if(this->v[i]>rate) break;
            else{
                count++;
            }
        }
        
        return count;
    }
};


int main(){
	
	StockSpanner obj = StockSpanner();
	int arr[100];
	int n;
	cin >> n;
	int x;
	for(int i=0; i<n; i++){
			cin >> x;
			arr[i]=obj.next(x);
	}
	
	// Print The Day;
	for(int i=0; i<n; i++){
			cout << arr[i] << " ";
	}
	return 0;
}
