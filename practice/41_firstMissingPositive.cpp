#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int counter = 1;
        sort(nums.begin(), nums.end());
        for(int i = 0; i <nums.size(); i++){
            if(nums[i]<=0) 
                 continue;
            if(nums[i]!=counter){
                if(i == 0)
                    return counter;
                if(nums[i] == nums[i-1])
                    continue;
                else
                    return counter;
            }
            counter++;
        }
        return counter;
    }
};


