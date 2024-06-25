#include<unordered_map>
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> answer;
        int i = 0, j = numbers.size()-1;
        while(numbers[i]+numbers[j]!= target){
            if(numbers[i]+numbers[j]>target)
                j--;
            else if (numbers[i]+numbers[j]<target)
                i++;
        }
        answer.push_back(++i);        
        answer.push_back(++j);        
        return answer;
    }
};