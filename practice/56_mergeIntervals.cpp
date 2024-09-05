#include<vector>
using namespace std;

class Solution {
public:

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<int> curr = intervals[0];
        vector<vector<int>> answer;
        for(int i = 0; i < intervals.size()-1; i++){
            if(curr[1]>=intervals[i+1][0]){
                if(curr[1]<intervals[i+1][1])
                    curr[1] = intervals[i+1][1];
            }
            else{
                answer.push_back(curr);
                curr = intervals[i+1];
            }
        }
        answer.push_back(curr);
        return answer;
    }

//great memory but super slow because of erase and shifting all the elems in the array
    // vector<vector<int>> merge(vector<vector<int>>& intervals) {
    //     sort(intervals.begin(),intervals.end());
    //     for(int i = 0; i < intervals.size()-1; i++){
    //         if(intervals[i][1]>=intervals[i+1][0]){
    //             if(intervals[i][1]<intervals[i+1][1])
    //                 intervals[i][1] = intervals[i+1][1];
    //             intervals.erase(intervals.begin()+i+1);
    //             i--;
    //         }
    //     }
    //     return intervals;
    // }
};