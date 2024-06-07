#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<long, long> m;
        for(long num : nums)
            m[num]++;

        vector<long> temp;
        vector<long> seen;
        vector<int> answer;
        for(auto i = m.begin(); i != m.end(); i++){
            temp.push_back(i->second);
        }
        sort(temp.begin(), temp.end(), greater<int>());
        long counter =0;
        while(k>0){
            for(auto i = m.begin(); i != m.end(); i++){
                if(i->second==temp[counter] && find(seen.begin(), seen.end(), i->first)== seen.end()){
                    answer.push_back(i->first);
                    seen.push_back(i->first);
                    break;
                }
            }
            counter++;
            k--;
        }
        return answer;
    }
};

int main (){
    Solution sol;
    vector<int> test = {1,2};
    vector<int> answer = sol.topKFrequent(test, 2);
    for(int num : answer)
        cout<<num<<", ";
    cout<<endl;
}

