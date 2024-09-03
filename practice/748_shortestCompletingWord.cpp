#include<iostream>
#include<string>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        string plate ="";
        for(char c : licensePlate){
            if(isalpha(c))
                plate+=tolower(c);
        }
        sort(words.begin(), words.end(), [](string &a, string &b){return a.size()<b.size();});
        
        map<char, int> m;
        for(string word : words){
            m.clear();
            for(char c : word)
                m[c]++;
            for(char c : plate){
                if(word.find(c)==-1 || m[c]==0)
                    goto next;
                else
                    m[c]--;
            }
            return word;
            next:{}
        }
        return "fail";
    }
};


int main () {
	Solution sol;
	string licensePlate = "1s3 PSt";
	vector<string> words = {"step","steps","stripe","stepple"};
	string a = sol.shortestCompletingWord(licensePlate, words);
	cout<<"final answer returned: "<<a<<endl;
	return 0;
}


