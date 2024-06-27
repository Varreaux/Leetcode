#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){return 0;}
        sort(nums.begin(), nums.end());
        int max = 1, counter = 1;
        for (int i = 1; i < nums.size(); i++){
            if(nums[i]-nums[i-1] == 1)
                counter++;
            else if(nums[i]-nums[i-1] == 0){}
            else{
                if(counter > max)
                    max = counter;
                counter = 1;
            }
        }
        if(counter > max)
                max = counter;
        return max;
    }
};

int main (){
    Solution sol;

    vector<int> nums = {0,3,7,2,5,8,4,6,0,1};
    int answer = sol.longestConsecutive(nums);
    cout<<answer<<endl;
    return 0;
}