#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char, int>m;
        map<char, int>m2;
        map<pair<char, int>, int>mm;

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j]!='.'){
                    if(m.count(board[i][j]) || mm.count(make_pair(board[i][j], ((i/3*4)+(j/3)))))
                        return false;
                    else{
                        m[board[i][j]]++;
                        mm[make_pair(board[i][j], ((i/3*4)+(j/3)))]++;
                    }                
                }
                if(board[j][i]!='.'){
                    if(m2.count(board[j][i]))
                        return false;
                    else
                        m2[board[j][i]]++;
                }
            }
            m.clear();
            m2.clear();
        }
        return true;
    }
};