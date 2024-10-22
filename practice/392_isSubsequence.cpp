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
};