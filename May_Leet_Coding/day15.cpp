  
  /*Maximum Circular SubArray*/
  
    int maxSubarraySumCircular(vector<int>& A) {
        int max_sum = Kandane(A);
        
        int max_wrap = 0;
        int max_element = A[0];
        for(int i=0; i<A.size(); i++){
            if(max_element<=A[i]) max_element = A[i];
            max_wrap += A[i];
            A[i] = -A[i];
        }
        
        max_wrap = max_wrap + Kandane(A);
        if( max_wrap==0) return max_sum;
        else    return (max_sum > max_wrap) ? max_sum : max_wrap;
        
      
    }
    
    
    /*-----Kandane Algorithm----------*/
    int Kandane(vector<int> a){
        int currentSum =a[0];
        int MaxSum = a[0];
        int n=a.size();
        for(int i=1; i<n; i++){
            currentSum = max(a[i], currentSum+a[i]);
            MaxSum = max(currentSum, MaxSum);
        }
        return MaxSum;
    }
