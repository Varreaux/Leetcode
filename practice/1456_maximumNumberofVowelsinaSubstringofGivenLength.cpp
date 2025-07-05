#include<string>
using namespace std;

class Solution {
public:
    int maxVowels(string s, int k) {
        string vowels = "aeiou";
        int count =0;
        for(int i=0; i<k; i++){if(vowels.find(s[i])!=string::npos)count++;}
        int maxy = count;
        for(int i=k; i<s.length(); i++){
            if(vowels.find(s[i])!=string::npos)count++;
            if(vowels.find(s[i-k])!=string::npos)count--;
            if(count>maxy)maxy=count;
            if(count==k) return k;
        }
        return maxy;
    }
};