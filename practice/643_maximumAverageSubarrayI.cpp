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
};