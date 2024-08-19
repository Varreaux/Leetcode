#include<vector>
// #include<algorithm>

using namespace std;

class Solution {
public:
    void nextP(vector<int> &nums, int &j, int &i){
        bool changed = false;
        for(int l = i-1; l > j+1; l--){
            for(int k = l-1; k > j; k--){
                if(nums[k]<nums[l]){
                    j = k;
                    i = l;
                    nextP(nums, j, i);
                    changed = true;
                    break;
                }
            }
            if(changed)
                break;
        }
        return;
    }

    void nextPermutation(vector<int>& nums) {
        bool changed = false;
        for(int i = nums.size()-1; i >= 1; i--){
            for(int j = i - 1; j >= 0; j--){
                if(nums[j]<nums[i]){
                    nextP(nums, j, i);
                    changed = true;
                    swap(nums[j], nums[i]);
                    sort(nums.begin()+j+1, nums.end());
                    break;
                }
            }
            if(changed)
                break;
        }
        if(!changed)
            sort(nums.begin(), nums.end());
    }
};

// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         next_permutation(nums.begin(),nums.end());
//     }
// };