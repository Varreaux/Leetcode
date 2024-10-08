#include<string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int k = s.length()-1;
        int count = 0;
        while(!isalpha(s[k])){k--;}
        while(k>=0 && isalpha(s[k--])){count++;}
        return count;
    }
};

//PYTHON VERSION

// class Solution:
//     def lengthOfLastWord(self, s: str) -> int:
//         k = len(s)-1
//         count = 0
//         while not s[k].isalpha():
//             k-=1
//         while k>=0 and s[k].isalpha():
//             k-=1
//             count+=1
//         return count     