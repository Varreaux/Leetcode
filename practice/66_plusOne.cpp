#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last = digits.size()-1, counter = 0;
        while(last - counter >= 0 && digits[last - counter] == 9){
            digits[last - counter] = 0;
            counter++;
        }
        if(last - counter < 0){
            digits.insert(digits.begin(), 1);
            return digits;
        }
        digits[last - counter]++;
        return digits;
    }
};


int main () {
	Solution sol;
	vector<int> digits = {9};
	vector<int> answer = sol.plusOne(digits);
	for(int num : answer){
		cout<<num<<endl;
	}
	return 0;
}
