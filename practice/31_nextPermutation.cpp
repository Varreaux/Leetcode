#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());
    }
};

// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         bool changed = false;
//         for(int i = nums.size()-1; i >= 1; i--){
//             for(int j = i - 1; j >= 0; j--){
//                 if(nums[j]<nums[i]){
//                     int temp1 = j+1;
//                     int temp2 = i-1;
//                     while(temp1 < temp2){
//                         if(nums[temp1]<nums[temp2]){
//                             j = temp1;
//                             i = temp2;
//                         }
//                         temp1++;
//                     }
//                     changed = true;
//                     swap(nums[j], nums[i]);
//                     sort(nums.begin()+j+1, nums.end());
//                     break;
//                 }
//             }
//             if(changed)
//                 break;
//         }
//         if(!changed)
//             sort(nums.begin(), nums.end());
//     }
// };