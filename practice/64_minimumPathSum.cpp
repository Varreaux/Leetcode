#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> memo (grid.size(), vector<int>(grid[0].size(), -1));
        return dfs(grid, memo, 0, 0);
    }

    int dfs (vector<vector<int>>& grid, vector<vector<int>>& memo, int i , int j){
        if(i > grid.size()-1 || j > grid[0].size()-1){
            return INT_MAX;
        }
        if(i == grid.size()-1 && j == grid[0].size()-1){
            return grid[i][j];
        }
        if(memo[i][j]!=-1){
            return memo[i][j];
        }

        memo[i][j] = min(dfs(grid, memo, i+1, j), dfs(grid, memo, i, j+1)) + grid[i][j];
        return memo[i][j];
    }
};


int main () {
	Solution sol;
	vector<vector<int>> grid = {{1,3,1},{1,5,1},{4,2,1}};
	cout<<sol.minPathSum(grid);
	return 0;
}
