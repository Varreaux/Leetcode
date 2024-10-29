#include<vector>
#include<unordered_map>
#include<numeric>

using namespace std;

class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        if(deck.size()==1) return false;

        unordered_map<int, int> m;
        for(int num : deck)
            m[num]++;

        if(m.size()==1) return true;
            
        for(auto i = m.begin(); i!= m.end(); i++){
            for(auto j = next(i,1); j!=m.end(); j++)
                if(gcd(i->second, j->second) == 1) return false;
        }
        
        return true;
    }
};