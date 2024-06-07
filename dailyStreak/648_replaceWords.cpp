#include<iostream>
#include<string>
#include<vector>
#include<set>

using namespace std;

class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        vector<string> words, answer;
        sort(dictionary.begin(), dictionary.end());
        words = putInVector(sentence);
        for(string word : words){
            bool found = false;
            for(string root : dictionary){
                int size = root.length();
                if(word.substr(0,size)==root){
                    found = true;
                    answer.push_back(root);
                    break;
                }
            }
            if(!found)
                answer.push_back(word);
        }
        string realAnswer = "";
        for(string word : answer){
            realAnswer += word+" ";
        }
        return realAnswer.substr(0, realAnswer.length()-1);
    }

    vector<string> putInVector (string s){
        vector<string> words;
        int i = 0, j = 0;
        while(s.find(' ',i) != string::npos){
            j = s.find(' ',i);
            words.push_back(s.substr(i, j-i));
            i = j+1;
        }
        words.push_back(s.substr(i, s.length()-i));

        return words;
    }

    string replaceWords_V2(vector<string>& dictionary, string sentence) {
        set<string> s;
        for(string str : dictionary)
            s.insert(str);
        
        string answer = "", temp = "";
        
        sentence+=' ';
        for(int i = 0; i<sentence.length(); i++){
            if(sentence[i] == ' '){
                answer+= temp + ' ';
                temp = "";
            }
            else{
                temp += sentence[i];
                if(s.count(temp)){
                    answer+=temp+' ';
                    temp = "";
                    while(sentence[i]!= ' '){i++;}
                }
            }
        }
        answer.pop_back();
        return answer;
    }
};


int main () {
    Solution sol;
    string sentence = "the cattle was rattled by the battery";
    vector<string> dictionary = {"catt","cat","bat","rat"};
    cout<<sol.replaceWords(dictionary, sentence);
    return 0;
}