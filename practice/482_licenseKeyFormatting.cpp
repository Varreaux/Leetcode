#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int count = 0;
        string str ="";
        for(int i = s.length()-1; i >=0; i--){
            if(count==k){
                str+='-';
                count=0;
            }
            if(isalpha(s[i])){str+=toupper(s[i]);count++;}
            else if(isdigit(s[i])){str+=s[i];count++;}
        }
        if(str.length()>=1 && str[str.length()-1]=='-'){str=str.substr(0,str.length()-1);}
        reverse(str.begin(), str.end());
        return str;
    }
};