#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
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