#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    
	//This works for alphanumerical but fails on the last test case cause it's too slow!
	bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()){return false;}
        vector<pair<char, char>> vec;
        for(int i = 0; i < s.length(); i++){
            for(auto p : vec){
                if(p.first == s[i] && p.second != t[i]){return false;}
                if(p.second == t[i] && p.first != s[i]){return false;}
            }
            vec.push_back(make_pair(s[i], t[i]));
        }
        return true;
    }
	
	////The issue is that this only works if the strings have alpha chars in them....need to rework this.
	
	// bool isIsomorphic(string s, string t) {
    //     if(s.length()!=t.length()){return false;}
    //     vector<char>mapping(26,'-');
    //     vector<char>track(26,'-');
    //     for(int i = 0; i < s.length(); i++){
    //         if((mapping[s[i]-'a']=='-' || mapping[s[i]-'a']== t[i]) && (track[t[i]-'a'] == '-' || track[t[i]-'a'] == s[i])){
    //             track[t[i]-'a']= s[i];
    //             mapping[s[i]-'a']= t[i];
    //         }
    //         else
    //             return false;
    //     }
    //     return true;
    // }
};