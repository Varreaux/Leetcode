#include<vector>
#include <numeric>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0, right = accumulate(nums.begin(), nums.end(), 0);
        for(int i = 0; i < nums.size(); i++){
            right -= nums[i];
            if(i!=0)left+= nums[i-1];
            if(right == left) return i;
        }
        return -1;
    }
};