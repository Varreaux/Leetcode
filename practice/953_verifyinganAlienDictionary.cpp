#include<string>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        if(words.size()==1)return true;
        unordered_map<char, int> m;
        for(int i = 0; i <order.length(); i++)
            m[order[i]]=i;
        bool ok = false;
        for(int i= 1; i <words.size(); i++){
            int j = 0;
            do{
                ok = false;
                if(m[words[i-1][j]]>m[words[i][j]]) return false;
                else if(m[words[i-1][j]]<m[words[i][j]]){ok = true; break;}
                j++;
            }while(j <= words[i-1].size() &&  j <= words[i].size());
            if(!ok)
                if(words[i-1].size() >  words[i].size()) return false;
        }
        return true;     
    }
};