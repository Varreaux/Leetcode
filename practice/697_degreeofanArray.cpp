#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int, int>m;
        vector<int>v;
        int maxy = 0;
        for(int num :nums){
            m[num]++;
            if(m[num]>maxy)
                maxy = m[num];
        }
        for(auto it = m.begin(); it != m.end(); it++){
            if(it->second == maxy)
                v.push_back(it->first);
        }
        int mini = nums.size();
        for(int num : v){
            int i = 0, j = nums.size()-1;
            while(num!=nums[i])
                i++;
            while(num!=nums[j])
                j--;
            if(j-i+1<mini)
                mini = j-i+1;
        }
        return mini;
    }
};