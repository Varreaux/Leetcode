#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int answer =0;
        sort(nums.begin(),nums.end());
        for(int i = 1; i < nums.size(); i++)
            answer+=min(nums[i-1],nums[i++]);
        return answer;
    }
};

int main () {
	Solution sol;
	vector<int>nums{6,2,6,5,1,2};
	cout<<sol.arrayPairSum(nums);
	return 0;
}
