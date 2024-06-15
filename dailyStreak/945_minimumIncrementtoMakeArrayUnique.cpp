//for some reason this does not work on leetcode but gives the right answers here.

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int answer = 0;
        unordered_map<int, int> m;
        for(int num : nums){
            m[num]++;
        }
        for(auto it = m.begin(); it != m.end(); it++){
            while(it->second>1){
                int where = 1;
                while(m.count(it->first+where)){where++;}
                m[it->first+where]++;
                it->second--;
                answer+= where;
            }
        }
        return answer;
    }
};

int main () {
	Solution sol;
	vector<int> answer = {13,11,4,6,4,0,0,5,3,7,2,3,10,11,4};
	cout<<sol.minIncrementForUnique(answer);
	return 0;
}
