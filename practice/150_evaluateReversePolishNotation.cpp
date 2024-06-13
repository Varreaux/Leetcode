#include<iostream>
#include<vector>
#include<stack>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
		for(string str : tokens){
			
			if(!(str == "/" || str == "+" || str == "-" || str == "*")){
				s.push(stoi(str));				
			}
			else{
				int num2 = s.top();
				s.pop();
				int num1 = s.top();
				s.pop();
				
				switch(str[0]){
					case '/':
						s.push(num1/num2);
						break;
					case '+':
						s.push(num1+num2);
						break;
					case '-':
						s.push(num1-num2);
						break;
					case '*':
						s.push(num1*num2);
						break;
					
				}
			}
		}
		return s.top();
    }
};

int main () {
	Solution sol;
	vector<string> tokens = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
	cout<<sol.evalRPN(tokens);
	return 0;
}
