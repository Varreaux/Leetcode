#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> a(2);
        unordered_map<int, int> m;
        for(int num:nums)
            m[num]++;
        for(int i = 1; i <= nums.size(); i++){
            if(m[i]==2) //first the double
                a[0]=i;
            if(m[i]==0)
                a[1]=i;
        }
        return a;
    }
};