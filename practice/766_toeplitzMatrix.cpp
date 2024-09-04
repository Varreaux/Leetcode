#include<vector>
using namespace std;

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int j,i,ex;
        for(int k = 0; k < matrix.size(); k++){
            i = k, j = 0;
            ex=matrix[i][j];
            while(j != matrix[0].size()-1 && i!=matrix.size()-1){
                if(matrix[++i][++j]!=ex)
                    return false;
            }
        }
        
        for(int k = 1; k < matrix[0].size(); k++){
            i = 0, j = k;
            ex=matrix[i][j];
            while(j != matrix[0].size()-1 && i!=matrix.size()-1){
                if(matrix[++i][++j]!=ex)
                    return false;
            }
        }
        return true;
    }
};
