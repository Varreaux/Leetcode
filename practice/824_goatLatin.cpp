#include<string>
#include<vector>
#include<sstream>

using namespace std;

class Solution {
public:
    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        string word, final="", vowels="aeiouAEIOU";
        int counter = 1;
        while(ss>>word){
            if(vowels.find(word[0])==string::npos){
                char temp = word[0];
                word.erase(0,1);
                word+=temp;
            }
            word+="ma";
            int i=0;
            while(i++ < counter)word+='a';
            final+=word+' ';
            counter++;
        }
        return final.substr(0,final.length()-1);
    }
};