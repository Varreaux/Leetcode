#include<string>
using namespace std;

class Solution {
public:
    int countSegments(string s) {
        if(s.length()==0)return 0;
        if(s.length()==1){if(s[0]!=' '){return 1;}};
        int i = 0, count=0;
        while(s[i]==' ' && i != s.length()-1){i++;}
        while(i<= s.length()-1 && s[i]!=' '){
            while(s[i]!=' ' && i != s.length()-1){i++;}
            count++;
            if(i==s.length()-1){return count;}
            while(s[i]==' ' && i != s.length()-1){i++;}    
        }
        return count;
    }
};