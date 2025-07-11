#include<string>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length())return false;
        unordered_map<char, int> map1, map2;
        for(char c:word1)map1[c]++;
        for(char c:word2)map2[c]++;
        vector<int> map11, map22;
        for(auto itt = map1.begin(); itt!=map1.end(); ++itt){if(!map2.count(itt->first))return false;map11.push_back(itt->second);}
        for(auto itt = map2.begin(); itt!=map2.end(); ++itt){map22.push_back(itt->second);}
        sort(map11.begin(), map11.end());
        sort(map22.begin(), map22.end());
        for(int i = 0; i < map11.size(); i++){if(map11[i]!=map22[i])return false;}
        return true;
    }
};