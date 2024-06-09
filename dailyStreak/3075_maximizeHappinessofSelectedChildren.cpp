#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long answer= 0;
        int index = 0;
        sort(happiness.begin(), happiness.end(), greater<int>());
        while(k>0){
            answer += max(happiness[index]-index, 0);
            index++;
            k--;
        }
        return answer;
    }
};

int main (){

    Solution sol;
    vector<int> v = {2,1,3};
    long long answer = sol.maximumHappinessSum(v, 2);

    cout<<answer;
}


