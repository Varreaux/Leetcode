#include<string>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        int num = 26;
        char letter;
        string a;
        while(columnNumber>=1){
            if(columnNumber%num ==0){
                letter = 'Z';
                columnNumber--;
            }
            else{
                letter = 'A'+(columnNumber%num)-1;
            }
            a = letter + a;
            columnNumber/=26;
        }
        return a;
    }
};