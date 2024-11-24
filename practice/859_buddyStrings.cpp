#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        int k = 0, l = s.length()-1;
        vector<int> num (26, 0);
        while(s[k]==goal[k] && k < s.length()){num[s[k]-'a']++;k++;}
        if(k==s.length())
			return (*max_element(num.begin(),num.end())>1) ? true : false;
        while(s[l]==goal[l]){l--;}
        swap(s[k], s[l]);
        return (s == goal) ? true : false;
    }
};