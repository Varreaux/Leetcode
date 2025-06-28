#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 0, idx = 0;
        char prev = chars[0];
        string s = "";

        for(char cha : chars){
            if(prev!=cha){
                s+=prev;
                if(count>1)s+=to_string(count);
                prev=cha;
                count=0;
            }
            count+=1;
        }
        s+=prev;
        if(count>1)s+=to_string(count);
        
        for(char cha : s) chars[idx++] = cha;
        return s.length();
    }
};