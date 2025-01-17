#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> results;
        vector<int> combination;
        backtrack(candidates, target, results, combination, 0);
        return results;
    }

    void backtrack(vector<int>& candidates, int target, vector<vector<int>>& results, vector<int>& combination, int start){
        if(target == 0){
            results.push_back(combination);return;
        }
        else if(target<0) 
            return;
        
        for(int i  = start; i < candidates.size(); i++){
            combination.push_back(candidates[i]);
            backtrack(candidates, target-candidates[i], results, combination, i);
            combination.pop_back();
        }
    }

};