#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int num : nums){
            m[num]++;
            if(m[num]>1)return num;
        }
        return -1;
    }
};