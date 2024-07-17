#include<vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0, current = 0;
        for(int num : nums){
            if(num == 1)
                current++;
            else{
                if(current>max)
                    max = current;
                current = 0;
            }
        }
        if(current>max)
            max = current;
        return max;
    }
};