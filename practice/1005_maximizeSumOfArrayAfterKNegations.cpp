#include<vector>
#include<numeric>

using namespace std;

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        if(nums.size()==1)return (k%2==0) ?  nums[0] : -nums[0];
        sort(nums.begin(), nums.end());
        int counter=0;
        while(k-->0){
            nums[counter] = -nums[counter];
            if(nums[counter]<nums[counter+1])continue;
            if(counter+1==nums.size()-1){
                nums[counter+1] = (k%2==0) ? nums[counter+1] : -nums[counter+1];
                break;
            }
            counter++;
        }
        return accumulate(nums.begin(), nums.end(),0);
    }
};