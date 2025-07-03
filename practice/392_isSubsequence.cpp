#include<string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int prev = 0;
        for(char c : s){
            for(int i = prev; i < t.length(); i++){
                if(c == t[i]){
                    prev = i+1; 
                    goto next;
                }
            }
            return false;
            next:
        }
        return true;
    }
    
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        while(i < s.length()){
            while(j<t.length()){
                if(s[i]==t[j++]){if(i == s.length()-1) return true; break;}
            }
            if (j==t.length()) return false;
            i++;
        }
        return true;
    }
};