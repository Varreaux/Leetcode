#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map <vector<int>, int> cols;
        int count =0;
        for(int i=0; i < grid[0].size(); i++){
            vector<int> col;
            for(vector<int>& row:grid)col.push_back(row[i]);
            cols[col]++;
        }
        for(vector<int>& row:grid){
            if(cols.count(row)) count+=cols[row];
        }
        return count;
    }
};