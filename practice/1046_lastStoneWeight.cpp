#include<vector>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int s = stones.size();
        while(s>1){
            sort(stones.begin(), stones.end());
            if(stones[s-1]==stones[s-2]){stones.pop_back();stones.pop_back();}
            else{
                int temp = stones[s-2];
                swap(stones[s-1],stones[s-2]);
                stones.pop_back();
                stones[s-2] -= temp;
            }
            s = stones.size();
        }
        return (stones.size()==1) ? stones[0] : 0;
    }
};