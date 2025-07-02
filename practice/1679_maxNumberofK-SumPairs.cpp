#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
	//nlogn
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i = 0, j = nums.size()-1, count=0;
        while(i<j){
            if(nums[i]+nums[j]>k) j--;
            else if(nums[i]+nums[j]<k) i++;
            else{
                i++;j--;count++;
            }
        }
        return count;
    }
	//n?
	int maxOperationsV2(vector<int>& nums, int k) {
        unordered_map<int,int> m ={};
        int i = 0, count=0;
        for(int num: nums){
            if(m[k-num]){
                count++;
                m[k-num]--;
            }
            else{m[num]++;}
        }
        return count;
    }
};
