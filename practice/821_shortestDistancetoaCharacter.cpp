#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> a;
        for(int i = 0; i < s.length(); i++){
            if(s[i]==c){
                a.push_back(i);
            }
        }
        vector<int> answer;
        for(int i = 0; i < s.length(); i++){
            bool pushed = false;
            int min = abs(a[0]-i);
            for(int j = 1; j < a.size(); j++){
                if(min>=abs(a[j]-i)){
                    min=abs(a[j]-i);
                }
                else{
                    answer.push_back(min);
                    pushed = true;
                    break;
                }
            }
            if(!pushed)
            answer.push_back(min);
        }
        return answer;
    }
};