#include<string>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:

    int firstUniqChar(string s) {
        vector<int> vec(26, 0);
        for(char c: s)
            vec[c-'a']++;
        for(int i = 0; i < s.length(); i++)
            if(vec[s[i]-'a']==1){return i;}
        return -1;
    }
    //slower:
	int firstUniqChar_v2(string s) {
        unordered_map<char, int> m;
        for(char c: s)
            m[c]++;
        for(int i = 0; i < s.length(); i++)
            if(m[s[i]]==1){return i;}
        return -1;
    }
};