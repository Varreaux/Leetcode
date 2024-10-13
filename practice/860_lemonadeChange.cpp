#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        map<int, int> m;
        for(int i = 0; i < bills.size(); i++){
            switch(bills[i]){
                case 5:
                    m[5]++;
                    break;
                case 10:
                    if(m[5]>=1){
                        m[5]--;
                        m[10]++;
                    }
                    else{return false;}
                    break;
                case 20:
                    if(m[10]>=1 && m[5]>=1){
                        m[10]--;
                        m[5]--;
                    }
                    else if(m[5]>=3){m[5]-=3;}
                    else{return false;}
                    break;
            }
        }
        return true;
    }
};