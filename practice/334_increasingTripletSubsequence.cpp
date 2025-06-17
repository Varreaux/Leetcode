#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
	//too slow (n^2)
    bool increasingTriplet(vector<int>& nums) {
        vector<vector<int>> track = {};
        for (int num : nums){
            for(vector<int>& vec : track){
                if(vec[vec.size()-1]<num){
                    vec.push_back(num);
                    if (vec.size() == 3) return true;
                }
                else if(vec[vec.size()-1]>num)
                    if(vec.size()==1 || vec[vec.size()-2]<num) vec[vec.size()-1] = num;
            }
            track.push_back({num});
        }
        return false;
    }
	//gpt answer
    bool increasingTriplet_2(vector<int>& nums) {
        int first = INT_MAX, second = INT_MAX;
        for (int num : nums) {
            if (num <= first) first = num;
            else if (num <= second) second = num;
            else return true;
        }
        return false;
    }
};

int main () {
	Solution sol;
	vector<int> nums = {1,2,3,4,5};
	if (sol.increasingTriplet(nums)){
		cout<<"This is true";
	}
	else{
		cout<<"This is not true";
	}
	return 0;
}
