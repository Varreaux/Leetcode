#include<iostream>
#include<vector>
#include<map>

using namespace std;


class Solution {
public:
    bool suming(vector<int>& nums){
        for(int num:nums)
            if(num!=0) {return false;}
        return true;
    }
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> answer;
        map<vector<int>, int> m;
        if(suming(nums))
            return {{0,0,0}};
        sort(nums.begin(), nums.end());
        int i = 0, it = 0, j = nums.size()-1;
        while(it!=nums.size()-1){
            i = 0;
            j = nums.size()-1;
            while(i<j){
                if(i == it)
                    i++;
                while(j == it || j == i)
                    j--; 
                if(i>j)
                    break;               
                if(nums[i]+nums[it]+nums[j]==0){
                    vector<int> temp = {nums[i],nums[it],nums[j]};
                    sort(temp.begin(), temp.end());
                    if(!m.count(temp)){
                        m[temp]++;
                        answer.push_back({nums[i],nums[it],nums[j]});
                    }
                    i++;
                }
                else if(nums[i]+nums[it]+nums[j]<0)
                    i++;
                else
                    j--;
            }
            it++;
        }
        return answer;
    }
};

int main(){
    Solution sol;
    vector<int> temp = {0,1,1};
    vector<vector<int>> answer = sol.threeSum(temp);
    for(auto it: answer){
        for(int num: it)
            cout<<num<<", ";
        cout<<endl;
    }

}