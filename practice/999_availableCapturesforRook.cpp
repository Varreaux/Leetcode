#include<vector>
using namespace std;

class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int counter = 0, x, y;
        for(int i = 0; i <board.size(); i++){
            y = (find(board[i].begin(), board[i].end(), 'R') != board[i].end()) ? distance(board[i].begin(), find(board[i].begin(), board[i].end(), 'R')) : -1;
            if(y!=-1){x = i; break;}
        }
        int xx =x+1;
        while(xx<8){
            if(board[xx][y]=='.'){xx++;continue;}
            else if(board[xx][y]=='B'){break;}
            else{counter++;break;}
        }
        xx =x-1;
        while(xx>=0){
            if(board[xx][y]=='.'){xx--;continue;}
            else if(board[xx][y]=='B'){break;}
            else{counter++;break;}
        }
        int yy = y-1;
        while(yy>=0){
            if(board[x][yy]=='.'){yy--;continue;}
            else if(board[x][yy]=='B'){break;}
            else{counter++;break;}
        }
        yy = y+1;
        while(yy<8){
            if(board[x][yy]=='.'){yy++;continue;}
            else if(board[x][yy]=='B'){break;}
            else{counter++;break;}
        }
        return counter;
    }
};