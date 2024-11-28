#include<string>
using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i = 0, j = s.length();
        while(i<j){
            while(!isalpha(s[i])&&i<j){i++;}
            while(!isalpha(s[j])&&i<j){j--;}
            swap(s[i++],s[j--]);
        }
        return s;
    }
};