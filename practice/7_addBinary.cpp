#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length()-1;
        int j = b.length()-1;
        int aa =0, counter = 1, bb=0;
        while(i>=0){
            aa+= (a[i--]-'0')*counter;
            counter*=2;
        }
        counter =1;
        while(j>=0){
            bb+= ((b[j--]-'0')*counter);
            counter*=2;

        }
        int tot = aa+bb;
        counter =1;
        while(counter<= tot){
            counter*=2;
        }
        counter/=2;
        string ans ="";
        while(counter>0){
            if(tot>=counter){
                tot-=counter;
                ans= ans+"1";
            }
            else{
                ans=ans+"0";
            }
            counter/=2;
        }
        if(ans==""){return "0";}
        return ans;
    }
};