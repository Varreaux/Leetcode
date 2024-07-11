#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> answer;
        if(nums.size() == 0)
            return answer;
        int i = 0, j = 1;
        string temp = "";
        while(j!=nums.size()){
            if(((long)nums[j]-(long)nums[j-1])<=1){
            }
            else{
                if(nums[i]==nums[j-1]){
                    answer.push_back(to_string(nums[i]));
                    i++;
                }
                else{
                    temp = to_string(nums[i]);
                    temp += "->";
                    temp += to_string(nums[j-1]);
                    answer.push_back(temp);
                    i = j;
                }
            }
            j++;
        }
        if(nums[i]==nums[j-1]){
            answer.push_back(to_string(nums[i]));
        }
        else{
            temp = to_string(nums[i]);
            temp += "->";
            temp += to_string(nums[j-1]);
            answer.push_back(temp);
            i = j;
        }
        return answer;
    }
};