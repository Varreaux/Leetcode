#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> answer;
        unordered_map<int, int> m;
        for(int i = 0; i < nums2.size(); i++){
            m[nums2[i]]++;   
        }
        for(int i = 0; i < nums1.size(); i++){
            if(m.count(nums1[i]) && m[nums1[i]] >= 1){
                answer.push_back(nums1[i]);
                m[nums1[i]]--;
            }
        }
        return answer;
    }
};