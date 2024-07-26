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

	int maxCount_v2(int m, int n, vector<vector<int>>& ops) {
        if(ops.size()==0){return m*n;}
        int min = ops[0][0], min2 = ops[0][1];
        for(auto op:ops){
            if(op[0]<min){min=op[0];}
            if(op[1]<min2){min2=op[1];}
        }
        return min*min2;
    }
};