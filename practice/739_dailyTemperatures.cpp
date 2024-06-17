/*
Each version is faster than the next but even the fastest one was not able to pass
the final test case.
*/
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

	vector<int> dailyTemperatures_v2(vector<int>& temperatures) {
        vector<int> temps;
        vector<int> days;
        int max = temperatures[temperatures.size()-1];
        bool gotIt;
        for(int i = temperatures.size()-1; i >= 0; i--){
            if(temperatures[i]>=max){
                days.insert(days.begin(),0);
                temps.insert(temps.begin(),temperatures[i]);
                max = temperatures[i];
                continue;
            }
            gotIt = false;
            for(int j = 0; j < temps.size(); j++){
                if(temps[j]>temperatures[i]){
                    days.insert(days.begin(),j+1);
                    gotIt = true;
                    break;
                }
            }
            if(!gotIt)
                days.insert(days.begin(),0);

            temps.insert(temps.begin(),temperatures[i]);
        }
        return days;
    }
	
	vector<int> dailyTemperatures_v3(vector<int>& temperatures) {
        vector<int> answer;
        list<int> temps;
        list<int> days;
        int max = temperatures[temperatures.size()-1];
        bool gotIt;
        for(int i = temperatures.size()-1; i >= 0; i--){
            if(temperatures[i]>=max){
                days.push_front(0);
                temps.push_front(temperatures[i]);
                max = temperatures[i];
                continue;
            }
            gotIt = false;
            auto it = temps.begin();
            for(int j = 0; j < temps.size(); j++){
                if(*it>temperatures[i]){
                    days.push_front(j+1);
                    gotIt = true;
                    break;
                }
                advance(it, 1);
            }
            if(!gotIt)
                days.push_front(0);

            temps.push_front(temperatures[i]);
        }
        for(auto it = days.begin(); it != days.end(); it++){
            answer.push_back(*it);
        }
        return answer;
    }
};

int main () {
	Solution sol;
	vector<int> temperatures = {73,74,75,71,69,72,76,73};
	vector<int> answer = sol.dailyTemperatures_v3(temperatures);
	for(int num : answer)
		cout<<num;
	return 0;
}
