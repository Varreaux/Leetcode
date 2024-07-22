#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> answer;
        vector<int> temp;
        int check = c;
        if(r*c!=mat[0].size()*mat.size()){return mat;}
        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[i].size(); j++){
                temp.push_back(mat[i][j]);
                if(--check == 0){
                    answer.push_back(temp);
                    check = c;
                    temp={};
                }
            }
        }
        return answer;
    }
};