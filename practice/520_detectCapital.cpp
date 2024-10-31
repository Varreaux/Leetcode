#include<string>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        reverse(word.begin(), word.end());
        bool cap = false, low = false;
        (word[0]<=90) ? cap =true: low = true;
        for(int i =1; i < word.length(); i++){
            if((word[i]<=90) && low){if(i != word.length()-1)return false;}
            if((word[i]>90) && cap) return false;
        }
        return true;
    }
};