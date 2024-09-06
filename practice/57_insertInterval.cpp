#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> answer; int indx; bool add = false;
        if(intervals.size()==0){return {newInterval};}
        if(newInterval[1]<intervals[0][0]){
            answer.push_back(newInterval);
            for(auto inter : intervals)
                answer.push_back(inter);
            return answer;
        }
        for(int i = 0; i < intervals.size(); i++){
            if(intervals[i][1]<newInterval[0]){
                answer.push_back(intervals[i]);
                continue;
            }
            else{
                add = true;
                if(intervals[i][0]>newInterval[0]&&intervals[i][0]>newInterval[1]){
                    answer.push_back(newInterval);
                    indx = i-1;
                    goto next;
                }
                if(intervals[i][0]>newInterval[0]){
                    intervals[i][0]=newInterval[0];
                }
                for(int j = i; j < intervals.size(); j++){
                    if(intervals[j][1]>newInterval[1]){
                        answer.push_back({intervals[i][0], intervals[j][1]});
                        indx = j;
                        break;
                    }
                    else{
                        if(intervals[j][1]<=newInterval[1] && (j==intervals.size()-1 || intervals[j+1][0]>newInterval[1])){
                            answer.push_back({intervals[i][0], newInterval[1]});
                            indx = j;
                            break;
                        }
                    }

                }
                goto next;
            }
        }
    next:
        if(!add)
            answer.push_back(newInterval);
        else{
            for(int i = indx+1; i < intervals.size(); i++){
                answer.push_back(intervals[i]);
            }
        }
        return answer;
    }
};
