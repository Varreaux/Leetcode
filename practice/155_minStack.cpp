#include<iostream>
#include<stack>

using namespace std;

class MinStack {
public:

    stack<pair<int, int>> s;

    MinStack() {}
    
    void push(int val) {
        if(s.empty())
            s.push(pair{val,val});
        else
            s.push({val, min(val, s.top().second)});
    }
    
    void pop() {s.pop();}
    
    int top() {return s.top().first;}
    
    int getMin() {return s.top().second;}
};

