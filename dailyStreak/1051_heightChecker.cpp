#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> actual = heights;
        sort(heights.begin(), heights.end());
        int counter=0;
        for(int i = 0; i < heights.size(); i++){
            if(actual[i]!=heights[i])
                counter++;
        }
        return counter;
    }
};

int main () {
	Solution sol;
	vector<int> heights = {1,1,4,2,1,3};
	cout << sol.heightChecker(heights);
	return 0;
}
