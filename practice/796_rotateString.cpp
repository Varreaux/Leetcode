#include<string>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        int length = s.length();
        while(length-->=0){
            char temp = s[0];
            s.erase(0,1);
            s+=temp;
            if(s==goal)return true;
        }
        return false;
    }
};