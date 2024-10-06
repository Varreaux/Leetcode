#include<string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int dis = needle.length();
        if(dis>haystack.length()){return -1;}
        for(int i = 0; i <= haystack.length()-dis; i++){
            if(haystack.substr(i, dis)==needle)
                return i;
        }
        return -1;
    }
};