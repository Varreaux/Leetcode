#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map <int, int> m;
        for(int i = 0; i < nums.size(); i++){
            if(m.count(nums[i])){
                if(abs(m[nums[i]]-i)<=k){
                    return true;
                }
            }
            m[nums[i]]=i;
        }
        return false;
    }
};