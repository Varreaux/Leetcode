#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string s) {
        int last = s[s.length()-1], max = s.length(), min = 0; 
        vector<int> v;
        for(char c : s)
            (c == 'I') ? v.push_back(min++) : v.push_back(max--);
        (last == 'I') ? v.push_back(min++) : v.push_back(max--);
        return v;
    }
};