#include<vector>
using namespace std;

class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a(nums2.size());
        vector<pair<int, int>> s;
        for(int i = 0; i < nums2.size(); i++)
            s.push_back({nums2[i], i});
        int i = 0, j = nums1.size()-1, k = 0;
        sort(nums1.begin(), nums1.end(),greater<int>());
        sort(s.begin(), s.end(), greater<pair<int, int>>());
        while(i<=j){
            if(s[k].first>=nums1[i])
                a[s[k++].second] = nums1[j--];
            else
                a[s[k++].second] = nums1[i++];
        }
        return a;
    }
};

//MUCH SLOWER VERSION

// class Solution {
// public:
//     vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> nums = nums2;
//         vector<int> a(nums2.size(), -1);
//         int i = 0, j = nums1.size()-1, k = 0;
//         sort(nums1.begin(), nums1.end(),greater<int>());
//         sort(nums2.begin(), nums2.end(),greater<int>());
//         while(i<=j){
//             if(nums2[k]>=nums1[i])
//                 findidx(nums2[k++],nums1[j--],a, nums);
//             else
//                 findidx(nums2[k++],nums1[i++],a, nums);
//         }
//         return a;
//     }

//     void findidx( int num , int replace, vector<int>&a, vector<int>&nums){
//         auto idx=nums.begin();
//         int idxx;
//         do{
//             idx = find(idx, nums.end(), num);
//             idxx = idx++ - nums.begin();
//         }while(a[idxx]!=-1);
//         a[idxx] =replace;
//     }
//};
