#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> answer = {};
        vector<int> temp = {};
        if(nums.size()<4)
            return answer;
        sort(nums.begin(), nums.end());
        int c, d;
        for(int a = 0; a < nums.size()-3; a++){
            for(int b = a+1; b < nums.size()-2; b++){
                c=b+1;
                d=nums.size()-1;
                while(c < d){
                    if((long)nums[a]+(long)nums[b]+(long)nums[c]+(long)nums[d]==target){
                        temp = {nums[a], nums[b], nums[c], nums[d]};
                        if(find(answer.begin(), answer.end(), temp)==answer.end())
                            answer.push_back(temp);
                        temp ={};
                        d--;
                    }
                    else if((long)nums[a]+(long)nums[b]+(long)nums[c]+(long)nums[d]>target)
                        d--;
                    else
                        c++;
                }
            }
        }
        return answer;
    }
};