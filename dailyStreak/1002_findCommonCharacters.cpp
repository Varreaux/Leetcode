#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        bool dontSkip;
        vector<string> answer;
        unordered_map<string, int> example = getmap(words[0]);
        
        for(int i = 1; i <words.size(); i++){
            unordered_map<string, int> temp = getmap(words[i]);
            for(auto it = example.begin(); it != example.end(); it++)
                it->second = min(it->second, temp[it->first]);
        }
        for(auto it = example.begin(); it != example.end(); it++){
            while(it->second>0){
                answer.push_back(it->first);
                it->second--;
            }
        }
        return answer;
    }

    unordered_map<string, int> getmap (string str){
        unordered_map<string, int> example;
        for(int i = 0; i < str.length(); i++)
            example[string(1, str[i])]++;
        return example;
     }
};

int main(){
    Solution sol;
    vector<string> words =  {"bella","label","roller"};
    vector<string> answer = sol.commonChars(words);
    for(string s : answer)
        cout<<s<<", ";
}