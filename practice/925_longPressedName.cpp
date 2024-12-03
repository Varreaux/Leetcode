#include<string>
using namespace std;

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        char last = name[0];
        int counter = 0;
        if(name.length()>typed.length())return false;
        if(name[name.length()-1]!=typed[typed.length()-1])return false;
        for(char c : name){
            for(int i = counter; i<typed.length(); i++){
                if(c == typed[counter]){
                    last = c;
                    counter++;
                    break;
                }
                else if(last != typed[counter]){
                    return false;
                }
                counter++;
            }
            if(c!=name[name.length()-1] && counter>typed.length()-1)return false;
        }
        while(counter<typed.length()){
            if(last != typed[counter++])return false;
        }
        return true;
    }
};
