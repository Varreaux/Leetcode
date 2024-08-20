#include<vector>
using namespace std;

class Solution {
public:

    int pivotIndex(vector<int>& nums) {
        int sum = 0, sum1 = 0;
        for (int i = 1; i < nums.size(); i++)
            sum+=nums[i];
        if(sum==sum1)
            return 0;
        for (int i = 1; i < nums.size(); i++){
            sum1+=nums[i-1];
            sum-=nums[i];
            if(sum==sum1)
                return i;
        }
        return -1;
    }

    // int pivotIndex(vector<int>& nums) {
    //     for (int i = 0; i < nums.size(); i++){
    //         int sum1 = 0, sum2 = 0;
    //         for(int j = 0; j<i; j++)
    //             sum1+=nums[j];
    //         for(int k = i+1; k<nums.size(); k++)
    //             sum2+=nums[k];
    //         if(sum1==sum2)
    //             return i;
    //     }
    //     return -1;
    // }
};