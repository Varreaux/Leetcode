#include<string>
using namespace std;

class Solution {
public:
    bool isStrobogrammatic(string num) {
        string newnum = "";
        for (char nu : num){
            switch(nu){
                case '2':
                case '3':
                case '4':
                case '5':
                case '7':
                    return false;
                case '0':
                    newnum= '0' + newnum;
                    break;
                case '1':
                    newnum= '1' + newnum;
                    break;
                case '6':
                    newnum= '9' + newnum;
                    break;
                case '8':
                    newnum= '8' + newnum;
                    break;
                case '9':
                    newnum= '6' + newnum;
            }
        }
        return num==newnum ? true : false;
    }
};