#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer = {{1}};
        vector<int> temp;
        int counter = 0, i = 0;
        while(counter < numRows-1){
            i = 0;
            temp.push_back(answer[counter][i]);
            while(i != answer[counter].size()-1){
                temp.push_back(answer[counter][i]+answer[counter][i+1]);
                i++;
            }
            temp.push_back(answer[counter][i]);
            answer.push_back(temp);
            temp={};
            counter++;
        }
        return answer;
    }
};