#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> vecs(26,0), vect(26,0);
        for(char c:s)
            vecs[c-'a']++;
        for(char c:t)
            vect[c-'a']++;
        for(int i = 0; i < 26; i++)
            if(vect[i]-vecs[i]==1){
                char c = 'a'+i;
                return c;
            }
        return'a';

    }
};