#include<vector>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a;
        for(int num : nums1){
            int temp = -1;
            for(int i = 0; i < nums2.size(); i++){
                if(nums2[i]==num){
                    while(i < nums2.size()){
                        if(nums2[i]>num){
                            temp = nums2[i];
                            break;
                        }
                        i++;
                    }
                    a.push_back(temp);
                    break;
                }
            }
        }
        return a;
    }
};