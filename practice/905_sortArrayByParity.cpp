#include<vector>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0, j =nums.size()-1;
        while(i<j){
            while(nums[i]%2==0 && i<j){i++;}
            while(nums[j]%2==1 && i<j){j--;}
            swap(nums[i],nums[j]);
        }
        return nums;
    }
};