#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;
        vector<int> answer;
        for(int num : nums)
            m[num]++;
        for(auto it = m.begin(); it!= m.end(); it++) {
            if(it->second == 1)
                answer.push_back(it->first);
        }
        return answer;
    }
};

int main(){
    
}