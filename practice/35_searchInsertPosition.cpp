#include<vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int maxi = nums.size()-1, mini = 0;
        int index = (maxi + mini)/2;
        while(nums[index] != target){
            if(maxi<=mini){
                if(nums[max(min(mini,maxi),0)]<target){return min(mini,maxi)+1;}
                else
                    return mini;
            }
            if(nums[index]<target){
                mini = index+1;
            }
            else{
                maxi = index-1;
            }
            index = (maxi + mini)/2;
        }
        return index;
    }
};