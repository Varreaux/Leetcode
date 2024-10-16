#include<string>
#include<vector>

using namespace std;


//The issue is that this only works if the strings have alpha chars in them....need to rework this.
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()){return false;}
        vector<char>mapping(26,'-');
        vector<char>track(26,'-');
        for(int i = 0; i < s.length(); i++){
            if((mapping[s[i]-'a']=='-' || mapping[s[i]-'a']== t[i]) && (track[t[i]-'a'] == '-' || track[t[i]-'a'] == s[i])){
                track[t[i]-'a']= s[i];
                mapping[s[i]-'a']= t[i];
            }
            else
                return false;
        }
        return true;
    }
};