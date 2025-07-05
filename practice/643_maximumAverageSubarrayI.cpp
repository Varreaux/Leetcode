#include<vector>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int temp = k;
        double solution = 0, max;
        for(int i = 0; i < temp; i++)
                solution+=nums[i];
        max = solution;
        while(temp<nums.size()){
            solution -= nums[temp-k];
            solution += nums[temp];
            if(solution>max)
                max = solution;
            temp++;
        }
        return max/k;
    }

    //same thing, just a little cleaner
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0.0;
        for(int i = 0; i<k; i++){sum+=nums[i];}
        double max = sum;
        for (int i = k; i < nums.size(); i++){
            sum+=nums[i];
            sum-=nums[i-k];
            if(sum>max){max=sum;}
        }
        return max/k;
    }
};