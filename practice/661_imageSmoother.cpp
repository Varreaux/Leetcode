#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int sum, c, avg;
        vector<vector<int>>answer(img.size(),vector<int>(img[0].size(),0));
        for(int i = 0; i < img.size(); i++){
            for(int j = 0; j < img[i].size(); j++){
                sum = img[i][j];
                c = 1;
                if(j!=0){
                    sum+=img[i][j-1];
                    c++;
                }
                if(j!=img[i].size()-1){
                    sum+=img[i][j+1];
                    c++;
                }
                if(i!=0){
                    sum+=img[i-1][j];
                    c++;
                    if(j!=0){
                        sum+=img[i-1][j-1];
                        c++;
                    }
                    if(j!=img[i].size()-1){
                        sum+=img[i-1][j+1];
                        c++;
                    }
                }
                if(i!=img.size()-1){
                    sum+=img[i+1][j];
                    c++;
                    if(j!=0){
                        sum+=img[i+1][j-1];
                        c++;
                    }
                    if(j!=img[i].size()-1){
                        sum+=img[i+1][j+1];
                        c++;
                    }
                }
                answer[i][j] = sum/c;
            }
        }
        return answer;
    }
};