#include<vector>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        for(int i =0; i < nums.size(); i++){
            if(i%2==0){
                if(nums[i]%2!=0){
                    int j = i+1;
                    while(nums[j]%2!=0){j++;}
                    swap(nums[i],nums[j]);
                }
            }
            else{
                if(nums[i]%2==0){
                    int j = i+1;
                    while(nums[j]%2==0){j++;}
                    swap(nums[i],nums[j]);
                }
            }
        }
        return nums;
    }
};