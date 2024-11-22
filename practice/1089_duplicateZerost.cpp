#include<vector>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> temp = arr;
        int i = 0;
        for(int num : temp){
            if(i < arr.size()){
                arr[i++]=num;
                if(num==0 && i < arr.size())arr[i++]=0;
            }
        }
        return;
    }
};