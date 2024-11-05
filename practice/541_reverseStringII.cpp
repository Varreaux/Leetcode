#include<string>
using namespace std;

class Solution {
public:
    string reverseStr(string s, int k) {
        if(s.length()==1)return s;
        string answer ="", temp ="";
        int j = 0;
        while(j < s.length()){
            temp = s.substr(j, min(k*2, (int)s.length()-j));
            if(min(k*2, (int)s.length()-j)==(int)s.length()-j){
                if((int)s.length()-j<k){
                    reverse(temp.begin(), temp.begin()+(int)s.length()-j);
                    answer+=temp;
                    break;
                }
            }
            reverse(temp.begin(), temp.begin()+k);
            answer+=temp;
            j += min(k*2, (int)s.length()-j); 
        }
        return answer;
    }
};