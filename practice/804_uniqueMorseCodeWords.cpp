#include<string>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        vector<string> answer;
        for(string word : words){
            string str = "";
            for(char c : word)
                str+=morse[(int)c - 97];
            if(find(answer.begin(), answer.end(),str)==answer.end())
                answer.push_back(str);
        }
        return answer.size();
    }
};