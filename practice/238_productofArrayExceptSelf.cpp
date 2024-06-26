#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;
        int total = 1, total2 = 1;
        int count_0 = 0;
        for(int i = 0; i < nums.size(); i++){
            total *= nums[i];
            if(nums[i] == 0){
                count_0++;
                continue;
            }
            total2 *= nums[i];
        }
        for(int i = 0; i < nums.size(); i++){
            int temp = total;
            if(nums[i] != 0){
                temp /= nums[i];
                answer.push_back(temp);
            }
            else if (count_0>1){
                answer.push_back(0);
            }
            else{
                answer.push_back(total2);
            }
        }
        return answer;
    }
};



int main(){

}