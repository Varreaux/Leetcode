#include<iostream>
#include<string>
#include<stack>

using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string final ="";
        stack<char> stk;
        for (char c : s){
			if (c == ')'){
				stk.pop();
				if (!stk.empty())	
					final +=c;
				}
			else {
				if (!stk.empty())	
					final +=c;
				stk.push(c);
				}
        }
		return final;
    }
};


int main () {
	Solution sol;
	string s = "(()())(())";
	cout<<sol.removeOuterParentheses(s)<<endl;
	return 0;
}
