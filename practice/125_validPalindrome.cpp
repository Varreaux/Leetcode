#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        for(int i = s.length()-1; i >= 0; i--){
            s[i] = tolower(s[i]);
            if((s[i]<97 || s[i]>122) && !(s[i]>=48 && s[i]<=57)){
                s.erase(i, 1);
            }
        }
        if(s.length()==0){return true;}
       
        int i = 0, j = s.length()-1;
        while(i<j)
            if(s[i++]!=s[j--]){return false;}
        return true;
    }
};

int main (){

    Solution sol;
    string s = "a.b,.";
    cout<< sol.isPalindrome(s);
}