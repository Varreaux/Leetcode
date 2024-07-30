#include<vector>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a = nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        int b = nums[nums.size()-1]*nums[0]*nums[1];
        if(a > b)
            return a;
        return b;
    }
};