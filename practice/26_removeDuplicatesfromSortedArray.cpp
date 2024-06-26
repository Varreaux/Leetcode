#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> m;
		for(int num : nums){
			m[num]++;
		}
		for(auto it = m.begin(); it != m.end(); it++){
			if(it->second>1){
				for(int i = nums.size() -1; i>= 0; i--){
					if(it->first == nums[i]){
						nums.erase(nums.begin()+i);
						it->second--;
						if(!(it->second>1))
							break;
					}
				}
			}
		}
		return nums.size();
    }

	int removeDuplicates_V2(vector<int>& nums) {
        unordered_map<int, int> m;
		for(int i = 0; i < nums.size(); i++){
			if(!m.count(nums[i])){
				m[nums[i]]++;
			}
			else{
				nums.erase(nums.begin()+i);
				i--;
			}
		}
		return nums.size();
	}

	int removeDuplicates_V3(vector<int>& nums) {
        unordered_map<int, int> m;
		for(int i = 1; i < nums.size(); i++){
			if(nums[i]==nums[i-1]){
				nums.erase(nums.begin()+i);
				i--;
			}
		}
		return nums.size();
	}
};

int main () {
	Solution sol;
	vector<int> nums = {1,1,2};
	cout<<sol.removeDuplicates(nums)<<endl;
	return 0;
}
