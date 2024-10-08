#include<string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int k = s.length()-1;
        int count = 0;
        while(!isalpha(s[k])){k--;}
        while(k>=0 && isalpha(s[k--])){count++;}
        return count;
    }
};