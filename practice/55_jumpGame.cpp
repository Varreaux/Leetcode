#include<vector>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums[0]==0 && nums.size()>1){return false;}
        int k = nums.size()-1;
        while(k != 0){
            for(int i = k-1; i >= -1; i--){
                if(i == -1){return false;}
                if(nums[i]>=k-i){
                    k=i;
                    break;
                }
            }
        }
        return true;
    }
};