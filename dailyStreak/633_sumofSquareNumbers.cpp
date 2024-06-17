#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
		int k = sqrt(c), i = 0;
		while(i <= k){
			if(pow(i, 2) + pow(k, 2) == c){return true;}
			if(pow(i, 2) + pow(k, 2) > c){k--;}
			else {i++;}
		}
		return false;
    }
};


int main () {
	Solution sol;
	int c = 5;
	(sol.judgeSquareSum(c)) ? cout<<"yes"<<endl : cout<<"no"<<endl;
	return 0;
}
