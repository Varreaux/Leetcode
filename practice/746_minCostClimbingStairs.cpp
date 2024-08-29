#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp (cost.size(), 0);
        for(int i = cost.size()-1; i>=0; i--){
            if( i < cost.size()-2)
                dp[i] = cost[i] + min(dp[i + 1], dp[i + 2]);
            else
                dp[i] = cost[i];
        }
        return min(dp[0], dp[1]);
    }
};
int main () {
	Solution sol;
	vector<int> cost = {841,462,566,398,243,248,238,650};
	cout<<"solution is: "<<sol.minCostClimbingStairs(cost);
	return 0;
}

