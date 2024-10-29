#include<string>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for(int i = 1; i < s.length(); i++){
            if(s[i]==s[0]){
                string word = s.substr(0,i);
                string attempt = word;
                while(attempt.size()<=s.size()){
                    attempt+=word;
                    if(attempt==s)return true;
                }
            }
        }
        return false;
    }
};