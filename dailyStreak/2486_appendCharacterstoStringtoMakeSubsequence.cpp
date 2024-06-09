#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    int appendCharacters(string s, string t) {
        int counter = 0, index = 0;
        for(char c:s){
            if(c == t[index]){
                index++;
                counter++;
            }
        }
        return t.length()-counter;
    }
};

int main(){

}