#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int>num(26, 0), temp;
        for(char charr: chars)num[charr-'a']++;
        int answer = 0;
        for(string& word : words){
            temp = num;
            for(int i = 0; i<word.length(); i++){
                if(temp[word[i]-'a']>0)temp[word[i]-'a']--;
                else goto next;
            }
            answer+=word.length();
            next:
        }
        return answer;
    }
};