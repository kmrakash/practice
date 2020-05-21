class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
        unordered_map<int, int> mp;
        unordered_map<int, int> t;
        
        for(int i=0; i<trust.size(); i++){
            mp[trust[i][0]]++;
            t[trust[i][1]]++;
        }
        
        for(int i=1; i<=N; i++){
            
            if(t[i]>=N-1 && mp[i]==0) return i;
        }
        
        return -1;
    }
};
