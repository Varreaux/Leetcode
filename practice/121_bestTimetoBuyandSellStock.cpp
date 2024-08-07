#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, mi = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if(prices[i]<mi){
                mi = prices[i];
                continue;
            }
            if(prices[i]-mi>profit)
                profit = prices[i]-mi;
        }
        return profit;
    }
};