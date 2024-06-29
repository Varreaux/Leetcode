#include<iostream>
#include<vector>

using namespace std;

        // int max = 0;
        // for(int num: candies){
        //     if(num>max)
        //         max=num;
        // }
    
class Solution{
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        auto max = max_element(candies.begin(), candies.end());

        vector<bool> v;
        for(int num: candies){
            if(num+extraCandies>=*max)
                v.push_back(true);
            else
                v.push_back(false);
        }
        return v;
    }
};

int main(){
    Solution sol;
    vector<int> candies = {2,3,5,1,3};
    int extraCandies = 3;
    vector<bool> v;
    v = sol.kidsWithCandies(candies, extraCandies);
    for(bool b : v)
        cout<<b<<endl;
}