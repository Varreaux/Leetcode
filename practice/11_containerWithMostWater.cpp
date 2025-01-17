#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:

    int maxArea(vector<int>& height) {
        int i = 0, j = height.size()-1, maxy = 0;
        while(i < j){
            int small = min(height[i], height[j]);
            int water = small * (j-i);
            if(water>maxy)
                maxy = water;
            (small == height[i]) ? i++ : j--;
        }
        return maxy;
    }

    int maxArea_old_version(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int counter = height.size()-1;
        //int turn = 0;
        int mini;
        int answer = 0;

        while(i<j){
            mini = min(height[i], height[j]);
            if(mini * counter > answer)
                answer = mini * counter;
            counter--;
            (mini == height[i]) ? i++ : j--;
        }
        return answer;
    }
};


int main(){
    Solution sol;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout<<sol.maxArea(height);
    return 0;
}