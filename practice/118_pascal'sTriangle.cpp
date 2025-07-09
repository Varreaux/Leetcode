#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a = {{1}};
        for(int i = 1; i < numRows; i++){
            vector<int> curr = a[i-1], temp = {};
            for(int j = 0; j < curr.size(); j++){
                if(j==0) {temp.push_back(curr[j]);continue;}
                temp.push_back(curr[j-1]+curr[j]);
            }
            temp.push_back(curr[curr.size()-1]);
            a.push_back(temp);
        }
        return a;
    }
};