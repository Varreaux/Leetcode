#include<vector>
#include<queue>

using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int j = 0, skipped = 0, maxy = 0;
        queue<int>q;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]==1){
                continue;
            }
            else if(skipped<k){
                q.push(i);
                skipped++;
            }
            else{
                if((i-j)>maxy)maxy=(i-j);
                if(q.empty()){j=i+1;continue;}
                j=q.front()+1;
                q.pop();
                q.push(i);
            }
        }
        if((nums.size()-j)>maxy)maxy=(nums.size()-j);
        return maxy;
    }
};
