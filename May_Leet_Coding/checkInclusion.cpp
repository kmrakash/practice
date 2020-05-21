// check if s2 contains s1 

#include<iostream>
#include<string>
#include<map>
#include<utility>
#include<algorithm>
using namespace std;

bool checkInclusion(string s1, string s2) {
        int map[26] = {0};
        for(char c : s1) map[c - 'a']++;
        int j = 0, i = 0, count_chars = s1.size();
        while(j < s2.size()){
			cout << "j " << j  << " " << "i " << i << "\n";
			cout << s2.at(j) << " "<<  map[s2.at(j)] << "\n";
			cout << s2.at(i) << " "<<  map[s2.at(i)] << "\n";
			cout << "Character count " << count_chars << "\n";
            if(map[s2.at(j++) - 'a']-- > 0)
                count_chars--;
            if(count_chars == 0) return true;
            if(j - i == s1.size() && map[s2.at(i++) - 'a']++ >= 0){
					count_chars++;
					cout << "I incrrement" << "\n";
				}
                
        }
        return false;
}


int main(){
	string s , p;
	getline(cin, s);
	getline(cin , p);
	
	cout << checkInclusion(s, p) << "\n";
		return 0;
}

/*class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s2.length() < s1.length()) {
            return false;
        }
        if (s1 == "") {
            return true;
        }

        vector<int> v(26, 0);
        for (char c : s1) {
            v[c - 'a']++;
        }

        vector<int> s(26, 0);
        for (int i = 0; i < s1.length() - 1; i++) {
            s[s2[i] - 'a']++;
        }

        for (int i = s1.length() - 1; i < s2.length(); i++) {
            s[s2[i] - 'a']++;
            if (compare(s, v)) {
                return true;
            }
            s[s2[i - (s1.length() - 1)] - 'a']--;
        }

        return false;
    }

private:
    bool compare(vector<int> &v1, vector<int> &v2) {
        for (int i = 0; i < v1.size(); i++) {
            if (v1[i] != v2[i]) {
                return false;
            }
        }
        return true;
    }
};*/
