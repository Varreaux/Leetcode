#include<string>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        string vow = "AEIOUaeiou";
        int i =0, j = s.length()-1;
        while(i<j){
            while(vow.find(s[i])==-1 && i<j){i++;}
            while(vow.find(s[j])==-1 && i<j){j--;}
            swap(s[i++],s[j--]);
        }
        return s;
    }
};	