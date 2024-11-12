#include<vector>
using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>kvec, answer;
        while(k>0){
            kvec.push_back(k%10);
            k/=10;
        }
        reverse(num.begin(), num.end());
        int n, rest = 0;
        for(int i = 0; i < max((int)num.size(), (int)kvec.size()); i++){
            if(i>=num.size()) n =0;
            else{n = num[i];}
            if(i>=kvec.size()) k =0;
            else{k = kvec[i];}
            if(k+n+rest>9) {
                answer.push_back((k+n+rest)%10);
                rest =1;
            }
            else {
                answer.push_back((k+n+rest));
                rest = 0;
            }
        }
        if(rest==1)
            answer.push_back(1);
        reverse(answer.begin(), answer.end());
        return answer;
    }
};