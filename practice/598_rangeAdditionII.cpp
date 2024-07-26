#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.size()==0){return m*n;}
        map<int,int>mm, mmm;
        for(auto op : ops){
            mm[op[0]]++;
            mmm[op[1]]++;
        }
        auto it = mm.begin(), itt = mmm.begin();
        return it->first*itt->first;
    }
};