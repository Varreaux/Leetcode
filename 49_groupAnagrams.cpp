#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;




class Solution {
public:

    map<char, int> mapConversion(string str){
        map<char, int> m;
        for(char c : str)
            m[c]++;
        return m;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer;
        map< map<char, int>, int> seen;
        int index = 0;
        for(int i = 0; i < strs.size(); i++){
            map<char, int> conv = mapConversion(strs[i]);
            if(!seen.count(conv)){
                seen[conv] = index++;
                vector<string> temp = {strs[i]};
                answer.push_back(temp);
            }
            else{
                answer[seen[conv]].push_back(strs[i]);
            }
        }
        return answer;
    }
};



int main (){
    Solution sol;
    vector<string> strs = {"nozzle","punjabi","waterlogged","extemporizing"};
    vector<vector<string>> answer = sol.groupAnagrams(strs);
    for(vector<string> v : answer){
        for(string s : v)
            cout<<s<<",";
        cout<<endl;
    }
}