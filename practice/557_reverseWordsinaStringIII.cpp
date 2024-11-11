#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int i = 0, j = 0;
        string answer ="", word;
        while(s.find(' ', i)!= string::npos){
            word = s.substr(i, s.find(' ', i) - i);
            reverse(word.begin(), word.end());
            answer+=word+" ";
            i = s.find(' ', i)+1;
        }
        word = s.substr(i);
        reverse(word.begin(), word.end());
        answer+=word;
        return answer;
    }
};