#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> a;
        vector<int> temp;
        backtrack(0, nums, temp, a);
        return a;
    }

    void backtrack(int start,vector<int>& nums, vector<int>&temp, vector<vector<int>>& a){
        a.push_back(temp);
        for(int i = start; i < nums.size(); i++){
            temp.push_back(nums[i]);
            backtrack(++start, nums, temp, a);
            temp.pop_back();
        }
    } 
};