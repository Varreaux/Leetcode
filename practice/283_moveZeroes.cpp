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
};