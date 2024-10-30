#include<string>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        bool at = 0;
        unordered_map<string, int> m;
        for(string email : emails){
            at=0;
            string e ="";
            for(int i =0; i <email.length(); i++){
                if(email[i]=='@')at=true;
                else if(email[i]=='.' && !at) continue;
                else if(email[i]=='+' && !at){
                    while(email[i]!='@'){i++;}
                    at = true;
                }
                e+=email[i];
            }
            m[e]++;
        }
        return m.size();
    }
};