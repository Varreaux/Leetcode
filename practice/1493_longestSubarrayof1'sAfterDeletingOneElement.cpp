#include<vector>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxy = 0, j = 0, z=0, prev=0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]==0){
                if(++z>1){
                    maxy=max(maxy, i-j-1);
                    j=prev+1;
                }
                prev=i;
            }
        }
        maxy=max(maxy, (int)nums.size()-j-1);
        return maxy;
    }
};