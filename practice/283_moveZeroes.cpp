#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int counter = 0;
        for(int i = nums.size()-1; i >= 0; i--){
            if(nums[i] == 0){
                nums.erase(nums.begin()+i);
                counter++;
            }
        }
        int i = 0;
        while(i<counter){
            nums.push_back(0);
            i++;
        }
    }

    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0;
        while(i < nums.size() && j < nums.size()){
            while(i < nums.size() && nums[i]!=0) i++;
            while(j < nums.size() && nums[j]==0) j++;
            if(j >= nums.size() || i >= nums.size()) break;
            if(i>j)j++;
            else swap(nums[i++], nums[j++]);
        }
    }
};