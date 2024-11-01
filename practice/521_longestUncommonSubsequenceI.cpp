#include<string>

using namespace std;

class Solution {

public:
    int findLUSlength(string a, string b) {
        if(a == b)return -1;
        string longest = (a.length()> b.length())? a : b;
        if(a.length()!=b.length())return longest.length();
        
        for(int j = a.length(); j>0; j--){
            for(int i = 0; i<=a.length()-j; i++)
                if(b.find(a.substr(i, j))==-1) return (j-i);
        }
        return 0;
    }

    // int findLUSlength(string a, string b) {
    //     if(a == b)return -1;
    //     string aa = (a.length()<= b.length())? a : b;
    //     string bb = (a.length()> b.length())? a : b;
    //     if(a.length()!=b.length())return bb.length();
    //     for(int i = aa.length()-1; i >= 0; i--){
    //         for(int j = 0; j < aa.length() - i; j++){
    //             if(bb.find(aa.substr(i, j))!=-1) return (i-j+1);
    //         }
    //     }
    //     return 0;
    // }
};
