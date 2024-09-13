#include<iostream>
#include<string>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        map <string, int> m;
        int i =0, j = 0, max=0;
        string maxStr, word;
        for(char& c : paragraph)
            c = tolower(c);
        while(paragraph.find(' ', j)!=-1){
            i = j;
            while(isalnum(paragraph[++i]));
			word = paragraph.substr(j, i-j);
            if(find(banned.begin(), banned.end(), word)!=banned.end()){
                j = i;
                while(j!=paragraph.length() && !isalnum(paragraph[++j]));
                continue;
            }
            m[word]++;
            if(m[word]>max){
                max = m[word];
                maxStr = word;
            }
            j = i;
            while(j!=paragraph.length() && !isalnum(paragraph[++j]));
        }
        
        i = paragraph.length();
        if(!isalnum(paragraph[paragraph.length()-1])){i--;}
		
        word = paragraph.substr(j, i-j);
        if(find(banned.begin(), banned.end(), word)==banned.end())
            if(m[word]+1>max){maxStr = word;}
        
        return maxStr;
    }
};


int main () {
	Solution sol;
	string paragraph = "Bob hit a ball, the hit BALL flew far after it was hit.";
	vector<string> banned = {"hit"};
	cout<<sol.mostCommonWord(paragraph, banned)<<endl;
	return 0;
}
