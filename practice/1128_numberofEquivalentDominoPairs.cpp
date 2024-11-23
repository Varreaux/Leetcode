#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<vector<int>, int> m;
        for(int i = 0; i < dominoes.size(); i++){
            if(dominoes[i][0]>dominoes[i][1])swap(dominoes[i][0], dominoes[i][1]);
            m[dominoes[i]]++;
        }
        int answer = 0;
        for(auto it= m.begin(); it!=m.end(); it++){
            if(it->second>=2)
                answer+=it->second*(it->second-1);
        }
        return answer/2;
    }
};