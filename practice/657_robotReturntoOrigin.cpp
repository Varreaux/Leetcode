#include<string>
#include<unordered_map>

using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char, int> m;
        for(char c : moves)
            m[c]++;
        if(m['U']==m['D'] && m['L']==m['R'])
            return true;
        return false;
    }
};