#include<vector>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool initial, current;
        int k = 0, l = 1, j;
        if(nums.size()<=2)return true;
        while(l!= nums.size()-1 && nums[k]==nums[l]){k++;l++;}
        if(l == nums.size()-1)return true;
        if(nums[k]<=nums[l])initial = true;
        else initial = false;
        for(int i = k; i < nums.size()-1; i++){
            j = i +1; 
            if(nums[i]==nums[j])current = initial;
            else if (nums[i]<nums[j])current = true;
            else current = false;
            if(initial!=current)return false;
        }
        return true;
    }
};