#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int k = 0; k<image.size(); k++){
            int i = 0, j = image[0].size()-1;
            if(i == j)
                (image[k][i] == 1) ? image[k][i]=0 : image[k][i]=1;
            while(i<j){
                (image[k][i] == 1) ? image[k][i]=0 : image[k][i]=1;
                (image[k][j] == 1) ? image[k][j]=0 : image[k][j]=1;
                swap(image[k][i], image[k][j]);
                i++; j--;
                if(i == j)
                    (image[k][i] == 1) ? image[k][i]=0 : image[k][i]=1;
            }
        }
        return image;
    }
};