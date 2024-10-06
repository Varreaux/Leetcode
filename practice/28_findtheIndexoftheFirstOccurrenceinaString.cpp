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

//PYTHON:
// class Solution:
//     def strStr(self, haystack: str, needle: str) -> int:
//         dis = len(needle)
//         if(dis>len(haystack)): return -1
//         for index, char in enumerate(haystack):
//             if needle == haystack[index:index+dis]: return index
//         return -1