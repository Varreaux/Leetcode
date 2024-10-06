#include<string>
using namespace std;

class Solution {
public:
   
    string longestPalindrome(string s) {
        string answer ="";
        for(int i = 0; i < s.length(); i++){
            expand(s,i,i,answer);
            expand(s, i, i+1, answer);
        }
        return answer;
    }
    void expand(const string& s, int i, int j, string& answer){
        while(i>=0 && j <= s.length() && s[i]==s[j]){
            if(answer.length()<j-i+1){answer = s.substr(i, j-i+1);}
            i--; j++;
        }
    }
    
};
	
// TOO LONG -- brute force approach where I am checking every single string.
	// string longestPalindrome(string s) {
    //     int j = s.length();
    //     while(j>0){
    //         for(int ii = 0; ii<= s.length()-j; ii++){
    //             if(check(s.substr(ii, j)))
    //                 return s.substr(ii, j);
    //         }
    //         j--;
    //     }
    //     return string(1, s[0]);
    // }

    // bool check(const string& str){
    //     int i = 0, j = str.length()-1;
    //     while(i < j){
    //         if(str[i++]!=str[j--])
    //             return false;
    //     }
    //     return true;
    // }