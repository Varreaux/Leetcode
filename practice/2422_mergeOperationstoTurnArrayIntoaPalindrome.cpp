#include<vector>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int l = 0, r = nums.size()-1, c = 0;
        while(l<r){
            long left = nums[l], right = nums[r];
            while(left != right && l < r){
                if(left<right){
                    left += nums[++l];c++;
                }
                else {
                    right += nums[--r];c++;
                }
            }
            l++;r--;
        }
        return c;
    }
};