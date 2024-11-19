#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int i =0, j =0;
        vector<vector<int>> answer;
        while(j<s.length()){
            while(s[i]==s[j] && j<s.length()){j++;}
            if((j-1)-i>=2)answer.push_back({i,j-1});
            i=j;
        }
        return answer;
    }
};