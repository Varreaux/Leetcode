#include<vector>
using namespace std;

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> answer; int a =0;
        for(int i : nums){
            a= a<<1 | i;
            answer.push_back(a%5==0);
            if(a>=5)a%=5;
        }
        return answer;
    }
};