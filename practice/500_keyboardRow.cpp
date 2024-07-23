#include<string>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char, int> m;
        vector<string> keyboard = {"qwertyuiop", "asdfghjkl", "zxcvbnm"}, answer;
        int row = -1;
        while(++row<=2){
            for(int i = 0; i < keyboard[row].length(); i++)
                m[keyboard[row][i]] = row;
        }
        for(string word : words){
            bool wrongRow = false;
            row = m[tolower(word[0])];
            for(char letter : word){
                if(m[tolower(letter)]!=row){
                    wrongRow = true;
                    break;
                }
            }
            if(!wrongRow)
                answer.push_back(word);
        }
        return answer;
    }
};