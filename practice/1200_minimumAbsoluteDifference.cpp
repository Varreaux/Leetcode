#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int min = abs(arr[0]-arr[1]);
        vector<vector<int>> answer = {{arr[0],arr[1]}};
        for(int i = 2; i < arr.size(); i++){
            if(abs(arr[i-1]-arr[i])<min){
                answer ={{arr[i-1],arr[i]}};
                min = abs(arr[i-1]-arr[i]);
            }
            else if (abs(arr[i-1]-arr[i])==min){
                answer.push_back({arr[i-1],arr[i]});
            }
        }
        return answer;
    }
};