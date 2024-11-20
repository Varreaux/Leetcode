#include<string>
#include<stack>

using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> qs; stack<char> qt;
        int i = 0;
        while (i < s.length() || i < t.length()){
            if(i < s.length()){
                if(s[i]=='#'){
                    if(!qs.empty())qs.pop();
                }
                else{qs.push(s[i]);}
            }
            if(i < t.length()){
                if(t[i]=='#'){
                    if(!qt.empty())qt.pop();
                }
                else{qt.push(t[i]);}
            }
            i++;
        }
        return (qs==qt);
    }
};