#include<vector>
using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = 0, max2 = 0, counter = 0, ind = 0;
        for(int num : nums){
            if(num>max){
                max2=max;
                max=num;
                ind = counter;
            }
            else if(num>max2)
                max2=num;
            counter++;
        }
        if(max2*2<=max)
            return ind;
        return -1;
    }
};