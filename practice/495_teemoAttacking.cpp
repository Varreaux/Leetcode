#include<vector>
using namespace std;

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int answer = 0;
        for(int i = 0; i < timeSeries.size()-1; i++)
            answer+= min(timeSeries[i+1]-timeSeries[i], duration);
        return answer+duration;
    }
};