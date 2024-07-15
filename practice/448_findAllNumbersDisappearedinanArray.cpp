#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> a;
        unordered_map<int, int> m;
        for(int num : nums)
            m[num]++;
        for(int i = 1; i <=nums.size(); i++){
            if(!m.count(i))
                a.push_back(i);
        }
        return a;
    }
};