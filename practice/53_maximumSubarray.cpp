#include<vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int b=0, maxSum=0, a, sum;
        for(int num:nums)
            maxSum+=num;
        while (b<nums.size()){
            a = 0, sum = 0;
            for(int i = 0; i <=b; i++)
                sum+=nums[i];
            if(maxSum<sum)
                maxSum=sum;
            int bb = b++;
            while(bb<nums.size()-1){
                sum-=nums[a++];
                sum+=nums[++bb];
                if(maxSum<sum)
                    maxSum=sum;
            }
        }
        return maxSum;
    }
};