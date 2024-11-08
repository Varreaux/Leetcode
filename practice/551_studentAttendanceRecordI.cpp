#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int counter=0;
        if(s[0]=='A' && s[1]=='A')return false;
        else if(s[0]=='A' || s[1]=='A') counter++;
        for(int i = 2; i <s.length(); i++){
            if(s[i-2]=='L' && s[i-1]=='L' && s[i]=='L')return false;
            if(s[i]=='A'){
                counter++;
                if(counter>1)return false;
            }
        }
        return true;
    }
};