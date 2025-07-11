#include<vector>
#include<unordered_set>

using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> a;
        vector<int> b, c;
        unordered_set<int> map1(nums1.begin(), nums1.end());
        unordered_set<int> map2(nums2.begin(), nums2.end());
        for(int num:map1){if(!map2.count(num))b.push_back(num);}
        for(int num:map2){if(!map1.count(num))c.push_back(num);}
        a.push_back(b); a.push_back(c);
        return a;
    }
};