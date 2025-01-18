#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
	//time limit exceeded...
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        for(int num:candidates)
            cout<<num<<',';
        vector<int> combination;
        vector<vector<int>> results;
        map<vector<int>, int> m;
        bool over = false;
        backtrack(candidates, target, combination, results, 0, m, over);
        return results;
    }

    void backtrack(vector<int>& candidates, int target, vector<int>& combination, vector<vector<int>>& results, int start, map<vector<int>, int>& m, bool& over){
        if(target == 0){
            if(!m.count(combination)){
                m[combination]++;
                results.push_back(combination);
            }
            return;
        }
        if(target < 0){
            over = true;
            return;
        }

        while(start<candidates.size()){
            combination.push_back(candidates[start]);
            backtrack(candidates, target-candidates[start], combination, results, ++start, m, over);
            combination.pop_back();
            if(over){
                over = false;
                return;
            }
        }
    }
};


int main () {
	Solution sol;

	return 0;
}
