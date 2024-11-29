#include<sstream>
#include<string>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> m;
        vector<string> vec;
        istringstream stream (s1), btream (s2);
        string word;
        while(stream>>word)
            m[word]++;
        while(btream>>word)
            m[word]++;
        for(auto it = m.begin(); it!=m.end(); it++)
            if(it->second==1)vec.push_back(it->first);
        return vec;
    }
};