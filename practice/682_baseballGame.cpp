#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>v;
        for(string s:operations){
            if(s.length()!=1){
                v.push_back(stoi(s));
                continue;
            }
            char c = s[0];
            switch(c){
                case 'D':
                    v.push_back(v[v.size()-1]*2);
                    break;
                case 'C':
                    v.pop_back();
                    break;
                case '+':
                    v.push_back(v[v.size()-1]+v[v.size()-2]);
                    break;
                default:
                    v.push_back(stoi(s));
            }
        }
        int total=0;
        for(int num : v)
            total+=num;
        return total;
    }
};