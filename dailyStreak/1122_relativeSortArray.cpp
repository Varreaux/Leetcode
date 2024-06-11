#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> answer, answer2;
        for(int num : arr2){
            for(int num2 : arr1){
                if(num == num2)
                    answer.push_back(num2);
            }
        }
        for(int num : arr1){
            if(find(arr2.begin(),arr2.end(), num) == arr2.end())
                answer2.push_back(num);
        }
        sort(answer2.begin(), answer2.end());
        for(int num : answer2)
            answer.push_back(num);
        return answer;
    }
};

