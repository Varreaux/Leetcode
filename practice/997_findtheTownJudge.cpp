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
        for(auto vec : trust){
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
};