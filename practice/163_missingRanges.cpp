#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> findMissingRanges(vector<int>& nums, int lower, int upper) {
        vector<vector<int>>answer;
        if(nums.size()==0) return {{lower,upper}};
        if (lower!=nums[0]) answer = {{lower, nums[0]-1}};
        for (int i =1; i <nums.size(); i++){
            if(nums[i]-1 != nums[i-1]) answer.push_back({nums[i-1]+1,nums[i]-1});
        }
        if (upper!=nums[nums.size()-1]) answer.push_back({nums[nums.size()-1]+1, upper});
        return answer;
    }
};