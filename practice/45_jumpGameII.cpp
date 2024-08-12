#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int i = 0, count =0;
        while (i < nums.size()-1){
            int mini = nums.size()-1, idx=0;
            for (int j = i+1; j <= min(i+nums[i], (int)nums.size()-1); j++){
                if(max(((int)nums.size()-1) - (nums[j]+j), 0)<=mini){
                    mini = max(((int)nums.size()-1) - (nums[j]+j),0);
                    idx = j;
                }
            }
            i = idx;
            count++;
        }
        return count;
    }
};

int main () {
	Solution sol;
	vector<int>v ={1,2,3};
	cout<<sol.jump(v)<<endl;
	return 0;
}
