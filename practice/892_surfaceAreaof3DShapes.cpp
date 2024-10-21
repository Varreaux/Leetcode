#include<vector>
using namespace std;

class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int sum = 0, counter = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j =0; j<grid[i].size(); j++){   //up
                if(grid[i][j]==0){counter++;}
                if(i == 0){
                    sum+=grid[i][j];
                }
                else{
                    sum+=max(grid[i][j]-grid[i-1][j],0);
                }
                if(i == grid.size()-1){          //down
                    sum+=grid[i][j];
                }
                else{
                    sum+=max(grid[i][j]-grid[i+1][j],0);
                }
                if(j==0){                   //left
                    sum+=grid[i][j];
                }
                else{
                    sum+=max(grid[i][j]-grid[i][j-1],0);
                }
                if(j==grid[i].size()-1){            //right
                    sum+=grid[i][j];
                }
                else{
                    sum+=max(grid[i][j]-grid[i][j+1],0);
                }
            }
        }
        return sum+(grid.size()*grid.size()*2-(2*counter));
    }
};