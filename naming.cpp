#include<iostream>
#include<string>
#include<fstream>

using namespace std;

string change (string title);

int main (){

    string str = "680. Valid Palindrome II";
    string answer = change(str);
    //string realAnswer = "dailyStreak/" + answer; 
    string realAnswer = "practice/" + answer; 
    

    ofstream outFile;
    outFile.open(realAnswer);
    cout<<answer<<endl<<endl;
    
    outFile<<"#include<iostream>"<<endl;
    outFile<<"#include<string>"<<endl;
    outFile<<"#include<vector>"<<endl;
    outFile<<"#include<unordered_map>"<<endl<<endl;
    outFile<<"using namespace std;"<<endl<<endl<<endl;
    // outFile<<"class Solution {"<<endl;
    // outFile<<"public:"<<endl;
    // outFile<<"\tint lengthOfLongestSubstring(string s) {"<<endl<<endl<<endl;
    // outFile<<"\t}"<<endl;
    // outFile<<"};"<<endl;

    outFile<<endl<<endl;

    outFile<<"int main () {"<<endl;
    outFile<<"\tSolution sol;"<<endl<<endl;
    outFile<<"\treturn 0;"<<endl;
    outFile<<"}"<<endl;
}

string change (string title){
    bool done = false;
    for(int i = 0; i < title.length()-1; i++){
        if(title[i] == '.')
            title[i]='_';
        if(title[i]== ' ')
            title.erase(i, 1);
        if(title[i]<91 && title[i]>64 && !done){
            title[i] = title[i] + 32;
            done = true;
        }
    }
    return title+".cpp";
}