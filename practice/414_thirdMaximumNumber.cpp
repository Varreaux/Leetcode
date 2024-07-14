#include<vector>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        int i = 0, j = 1;
        while(j < 3){
            if(i == nums.size()-1)
                break;
            if(nums[i]!=nums[i+1]){
                i++;
                j++;
            }
            else
                i++;
        }
        if(j == 3)
            return nums[i];
        else
            return nums[0];
    }
};