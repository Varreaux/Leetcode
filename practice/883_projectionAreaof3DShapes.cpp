#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int top = 0, side1 =0, side2 =0;
        vector<int> temp (50, 0);
        for (auto vec : grid){
            for(int i = 0; i < vec.size(); i++){
                if(vec[i]>temp[i])
                    temp[i]=vec[i];
                if(vec[i]>0){top++;}
            }
            side1 += *max_element(vec.begin(),vec.end());
        }
        for(int num : temp)
            side2+=num;
        return top+side1+side2;
    }
};