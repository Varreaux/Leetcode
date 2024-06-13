#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        bool swapy = true;
        int counter = 0;
        while(swapy){
            counter++;
            swapy = false;
            for(int i =0; i < nums.size()-counter; i++){
                if(nums[i]>nums[i+1]){
                    swap(nums[i],nums[i+1]);
                    swapy = true;
                }
            }
        }
    }
};


