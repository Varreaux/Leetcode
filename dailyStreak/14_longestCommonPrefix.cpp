#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string answer = "";
        if(strs[0] == ""){return answer;}
        for(int i = 0; i < strs[0].length(); i++){
            for(string str : strs){
                if(strs[0][i]!=str[i])
                    return answer;
            }
            answer+=strs[0][i];
        }
        return answer;
    }
};