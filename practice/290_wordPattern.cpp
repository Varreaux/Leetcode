#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int i = 0, j = 0;
        vector<string> v;
        while(j!=s.length()-1){
            if(s.find(' ',i)==-1){break;}
            j = s.find(' ',i);
            v.push_back(s.substr(i, j-i));
            i = j+1;
        }
        v.push_back(s.substr(i));
        for(auto a : v)
            cout<<"'"<<a<<"'"<<endl;
        if(v.size()!=pattern.length())return false;
        unordered_map<char, string> m; 
        unordered_map<string, char> mm; 
        int counter = -1; 
        for(char c : pattern){
            counter++;
            if(m.count(c)){
                if(m[c]!=v[counter]){return false;}
            }
            else if(mm.count(v[counter])){
                if(mm[v[counter]]!=c){return false;}
            }
            else{
                m[c]=v[counter];
                mm[v[counter]]=c;
            }
        }
        return true;
    }
};