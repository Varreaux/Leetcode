#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    int findLHS(vector<int>& nums) {
        int max = 0;
        map<int, int> m;
        for(int num:nums)
            m[num]++;
        for(auto it=m.begin(); it!=m.end(); it++){
            if(m.count((it->first)+1)){
                if(m[it->first]+m[(it->first)+1]>max)
                    max = m[it->first]+m[(it->first)+1];
            }
        }
        return max;
    }
};