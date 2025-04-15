#include<vector>
using namespace std;


class Solution {
public:
	int sumOfDigits(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		int num = nums[0], ans = 0;
		while(num){
			ans+=num%10;
			num/=10;
		}
		return ans%2 ? 0:1;
	}
};