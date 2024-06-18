#include<iostream>
#include<vector>
#include<map>

using namespace std;


class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        map<int, int> m;
		int money = 0;
		for(int i = 0; i < profit.size(); i++){
			if(m.count(profit[i])){
				if(difficulty[i]>m[profit[i]])
					continue;
			}
			m[profit[i]]=difficulty[i];
		}
		
		for(int i = 0; i < worker.size(); i++){
			for(auto it = m.rbegin(); it != m.rend(); it++){
				if(worker[i]>=it->second){
					money += it->first;
					break;
				}
			}
		}
		return money;
    }
};

int main () {
	Solution sol;
	vector<int> difficulty = {2,17,19,20,24,29,33,43,50,51,57,67,70,72,73,75,80,82,87,90};
	vector<int> profit = {6,7,10,17,18,29,30,31,34,39,40,42,48,54,57,78,78,78,83,88};
	vector<int> worker = {12,9,11,41,11,87,48,6,48,93,76,73,7,50,55,97,47,33,46,10};
	int answer = sol.maxProfitAssignment(difficulty, profit, worker);
	cout<<answer<<endl;
	return 0;
}
