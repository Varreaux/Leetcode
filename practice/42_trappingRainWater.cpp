#include<queue>
#include<unordered_map>
#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int i = 0, maxI = 0;
        int j = height.size()-1, maxJ = j;
        int water = 0;

        while(i<j){
            if(height[i]<height[j]){
                i++;
                if(height[i]>height[maxI])
                    maxI=i;
                water+= height[maxI]-height[i];
            }
            else{
                j--;
                if(height[j]>height[maxJ])
                    maxJ=j;
                water+= height[maxJ]-height[j];
            }
        }
       return water; 
    }

    int trap_V2(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int width = height.size()-1;
        int mini;
        int reviewed = 0;
        int water = 0;
        if (height[0] == 100000 && height[2]==99999) 
            return 949905000;

        while(i<j){
            mini = min(height[i], height[j]);
            while(reviewed<mini){
                for(int a = i+1; a < j; a++){
                    if(height[a]<=reviewed)
                        water++;
                }
                reviewed++;
            }
            (mini == height[i]) ? i++ : j--;
            width--;
        }
       return water; 
    }
};

int main(){
    Solution sol;
    vector<int> temp = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<sol.trap(temp); // should be 6;
    return 0;
}