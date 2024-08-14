#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size(), inner = 0, i, j, t, temp, temp2, counter;
        do{
            for(int p = inner; p < row-(inner+1); p++){
                i = inner, j = p, counter = 0;
                temp = matrix[inner][j];
                while(counter < 4){
                    t = j;
                    j = row-1-i;
                    i = t;
                    temp2 = matrix[i][j];
                    matrix[i][j] = temp;
                    temp = temp2;
                    counter++;
                }
            }
            inner++;
        }while(inner <= row-3);
    }
};