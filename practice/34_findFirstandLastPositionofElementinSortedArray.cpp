#include<vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1, mid, temp;
        while(left<=right){
            mid = (left+right)/2;
            if(nums[mid]==target){
                temp = mid;
                while(temp!=-1){
                    if(nums[temp]!=target)
                        break;
                    temp--;
                }
                int low = ++temp;
                temp = mid;
                while(temp!=nums.size()){
                    if(nums[temp]!=target)
                        break;
                    temp++;
                }
                int high = --temp;
                return {low, high};
            }
            if(target<=nums[mid])
                right = mid-1;
            else
                left = mid+1;
        }
        return {-1, -1};
    }
};