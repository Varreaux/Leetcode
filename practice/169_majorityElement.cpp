#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
      unordered_map <int, int> m;
      for(int num : nums){
        m[num]++;
        if(m[num]>nums.size()/2)
            return num;
      }
    return 0;
    }
};