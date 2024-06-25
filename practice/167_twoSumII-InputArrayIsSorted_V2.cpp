#include<unordered_map>
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>m;
        vector<int> answer;
        int ind = 0;
        for(int num:numbers)
            m[num] = ind++;
        
        for(int i = 0; i < numbers.size(); i++){
            int looking = target - numbers[i];
            if(m.count(looking)){
                answer.push_back(min(m[looking] + 1, i+1));
                answer.push_back(max(m[looking] + 1, i+1));
                break;
            }
        }
        return answer;
    }
};