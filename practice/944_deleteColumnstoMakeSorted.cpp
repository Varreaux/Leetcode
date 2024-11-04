#include<string>
#include<vector>
#include<numeric>

using namespace std;

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        vector<int> track (strs[0].size(), 0);
        vector<int> del (strs[0].size(), 0);
        for(string str: strs){
            for(int i = 0; i < str.length(); i++){
                if(track[i]>str[i]) del[i]=1;
                else track[i]=str[i];
            }
        }
        return accumulate(del.begin(), del.end(), 0);
    }
};