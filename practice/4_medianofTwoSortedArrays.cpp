#include<vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> final(nums1.size()+nums2.size());
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), final.begin());
        if(final.size()%2 == 1)
            return final[final.size()/2];
        else
            return ((double)(final[final.size()/2] + final[final.size()/2 -1])/2);
    }
};