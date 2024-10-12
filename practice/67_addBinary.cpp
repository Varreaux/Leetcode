#include<string>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length()-1;
        int j = b.length()-1;
        int counter = 0, rest = 0;
        string ans = "";
        char cc;
        while(i>=0 && j>=0){
            counter = (a[i--]-'0') + (b[j--]-'0') + rest;
            cc = counter+'0';
            if(counter<=1){
                ans = cc+ans;
                rest =0;
            }
            else if(counter==2){
                ans = '0'+ans;
                rest = 1;
            }
            else{
                ans = '1'+ans;
                rest = 1;
            }   
        }
        while(i>=0){
            counter = (a[i--]-'0') + rest;
            cc = counter+'0';
            if(counter<=1){
                ans = cc+ans;
                rest =0;
            }
            else if(counter==2){
                ans = '0'+ans;
                rest = 1;
            }
        }
        while(j>=0){
            counter = (b[j--]-'0') + rest;
            cc = counter+'0';
            if(counter<=1){
                ans = cc+ans;
                rest =0;
            }
            else if(counter==2){
                ans = '0'+ans;
                rest = 1;
            }
        }
        (rest == 0) ? ans = ans : ans = '1'+ans;
        return ans;
    }
};