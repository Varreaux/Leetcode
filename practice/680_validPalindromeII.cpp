#include<string>
using namespace std;

class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0, j = s.length()-1;
        while(i<j){
            if(s[i]!=s[j]){
                if(pal(s, i , j-1) || pal(s, i+1, j)) return true;
                return false;
            }
            i++;j--;
        }
        return true;
    }

    bool pal (string s, int i, int j){
        while(i<j)
            if(s[i++]!=s[j--]) return false;
        return true;
    }
};