#include<iostream>
#include<vector>
#include<list>

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> days;
		vector<pair<int, int>> track;
        int max = temperatures[temperatures.size()-1];
        bool gotIt;
        for(int i = temperatures.size()-1; i >= 0; i--){
            if(temperatures[i]>=max){
                days.insert(days.begin(),0);
                track.insert(track.begin(),make_pair(temperatures[i], 0));
                max = temperatures[i];
                continue;
            }
			int jj;
            for(int j = 0; j < track.size(); j++){
				jj = j+1;
                if(track[j].first > temperatures[i]){
                    days.insert(days.begin(),j+1);
                    break;
                }
				else if(track[j].second == 0){
					days.insert(days.begin(),0);
					break;
				}
				else
					j += track[j].second-1;
            }
            track.insert(track.begin(),make_pair(temperatures[i], jj));
        }
        return days;
    }

};

int main () {
	Solution sol;
	vector<int> temperatures = {73,74,75,71,69,72,76,73};
	//[1,1,4,2,1,1,0,0]
	vector<int> answer = sol.dailyTemperatures(temperatures);
	for(int num : answer)
		cout<<num;
	return 0;
}
