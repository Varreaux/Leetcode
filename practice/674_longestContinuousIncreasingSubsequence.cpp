#include<vector>
using namespace std;

class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int max = 1, current =1;
        for (int i = 0; i < nums.size()-1; i++){
            if(nums[i] < nums[i+1])
                current++;
            else{
                if(current>max)
                    max=current;
                current=1;
            }
        }
        if(current>max)
            max=current;
        return max;
    }
};