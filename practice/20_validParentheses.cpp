#include<iostream>
#include<string>
#include<stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> mystack;
        for(char c : s){
            if((c == ')' || c == ']' || c == '}') && mystack.empty())
                return false;
            else if(c == ')' && mystack.top()=='(')
                mystack.pop();
            else if(c == ']' && mystack.top()=='[')
                mystack.pop();
            else if(c == '}' && mystack.top()=='{')
                mystack.pop();
            else
                mystack.push(c);
        }
        if(mystack.empty())
            return true;
        else
            return false;
    }
};

int main (){
    Solution sol;
    string s = "]";
    (sol.isValid(s)) ? cout<<"true" : cout<<"not true";
}