#include<vector>
using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3) return false;
        bool peak = false;
        int prev = arr[0];
        for(int i = 1; i <arr.size(); i++){
            if(arr[i]==prev)return false;
            if(arr[i]>prev && peak) return false;
            if(arr[i]<prev && !peak){if(i==1)return false;peak = true;}
            prev=arr[i];
        }
        if(!peak)return false;
        return true;
    }
};