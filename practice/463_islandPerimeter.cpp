#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int answer = 0;
        for(int i =0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j]==1){
                    int a = 4;
                    if(j!=0 && grid[i][j-1]==1)
                        a--;
                    if(i!=0 && grid[i-1][j]==1)
                        a--;
                    if(i!=grid.size()-1 && grid[i+1][j]==1)
                        a--;
                    if(j!=grid[0].size()-1 && grid[i][j+1]==1)
                        a--;
                    answer+=a;
                }
            }
        }
        return answer;
    }
};

int main () {
	Solution sol;
	vector<vector<int>> grid = {{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};
	int answer = sol.islandPerimeter(grid);
	cout<<endl<<"the answer is: "<< answer;
}
