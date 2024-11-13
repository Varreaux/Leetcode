#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        bool found = false;
        vector<int> people;
        int judge;
        unordered_map<int, int> m;
        if(n ==1) return 1;
        for(auto& vec : trust){
            m[vec[1]]++;
            people.push_back(vec[0]);
        }
        for(auto it = m.begin(); it!= m.end(); it++){
            if(it->second == n-1){
                if(find(people.begin(), people.end(), it->first)!= people.end())continue;
                if(found) return -1;
                else {
                    judge = it->first;
                    found = true;
                }
            }
        }
        if(found) return judge;
        return -1;
    }

	int findJudgev2(int n, vector<vector<int>>& trust) {
        vector<int> peeps (n, 0);
        vector<int> like (n, 0);
        int judge = -1;
        if(n==1)return 1;
        for(auto vec : trust){
            peeps[vec[1]-1]++;
            like[vec[0]-1]++;
        }
        for(int i =0; i < n; i++){
            if(peeps[i]==n-1){
                if(like[i]!=0) continue;
                if(judge != -1) return -1;
                judge = i+1;
            }
        }
        return judge;
    }


    int findJudgev3(int n, vector<vector<int>>& trust) {
        vector<int> trustCount(n + 1, 0);
        
        for (auto& t : trust) {
            trustCount[t[0]]--; // person t[0] trusts someone, reduce their score
            trustCount[t[1]]++; // person t[1] is trusted, increase their score
        }
        
        for (int i = 1; i <= n; i++) {
            if (trustCount[i] == n - 1) {
                return i; // found the judge
            }
        }
        
        return -1; // no judge found
    }

};