#include<string>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        int rest = 0, i = num1.length()-1, j =num2.length()-1, a, b, temp;
        string answer="";
        while(i>=0 || j>=0 || rest){
            if(i>=0)
                a = num1[i]-'0';
            else
                a = 0;

            if(j>=0)
                b = num2[j]-'0';
            else
                b = 0;

            temp = a+b+rest;
            if(temp>=10){
                rest = 1;
                temp -=10;
            }
            else{rest = 0;}

            answer.push_back(temp+'0');
            //answer+=to_string(temp); less efficient cause it's a string not a char.
            i--;j--;
        }
        reverse(answer.begin(), answer.end());
        return answer;
    }
};