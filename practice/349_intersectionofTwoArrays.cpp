#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> answer;
        unordered_map <int, int> m;
        for(int num : nums1){
            if(m[num] == 0)
                m[num]++;
        }
        for(int num : nums2){
            if(m.count(num) && m[num] == 1){
                answer.push_back(num);
                m[num]++;
            }
        }
        return answer;
    }
};